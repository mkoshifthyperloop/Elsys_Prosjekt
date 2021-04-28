//Network includes
#include "WiFi.h"
#include "esp_wifi.h"
#include "ESPAsyncWebServer.h"
#include "ArduinoJson.h"

//Sensor includes
#include "PMW3360.h" //Mus bruker SPI
#include "Adafruit_Sensor.h"
#include "Adafruit_BNO055.h" //IMU bruker I2C
#include "Wire.h"
#include <utility/imumaths.h>


//Data
double x[1000] = {};
double y[1000] = {};
double Heading[1000] = {};
double theta[1000] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
double acclX[1000] = {};
double acclY[1000] = {};
double angVel[1000] = {};
int cnt = 0;

//Network things
const char* ssid = "ESP32-AP";
const char* password = "123456789";
IPAddress IP;
AsyncWebServer server(80); // Create AsyncWebServer object on port 80

//Sensorer
PMW3360 MouseSensor;
Adafruit_BNO055 IMU = Adafruit_BNO055(-1, 0x28);
#define SS 16

//Andre ting
#define BaudRate 115200
bool active = true;
bool Connected = false;

bool BNO = false;
bool PMW = false;

#define SampleDelay 100000 //Micro seconds


void setup(){
  // Serial port for debugging purposes
  Serial.begin(BaudRate);

  startServer();
  Serial.println(IP);
 
  if(!IMU.begin())
  {
    Serial.println("BNO055 failed");
  }
  else{
    Serial.println("BNO055 connected");
    BNO = true;  
  }

  if(MouseSensor.begin(SS)){  // 10 is the pin connected to SS of the module.
    Serial.println("PMW initialization successed");
    PMW = true;
  }
  else{
    Serial.println("PMW initialization failed");
  }
}

void loop(){
  
  while (active){
    int Time = micros();
    GetData();
    while (micros() < Time + SampleDelay){}
    //Serial.println(Heading[cnt-1]);
  }
  //Debug
  
  digitalWrite(17, HIGH);
  Serial.println("Working");
  delay(1000);
  digitalWrite(17, LOW);
}

void GetData(){
  float rot;  
  
  //Read IMU
  if (BNO){
    uint8_t system, gyro, accel, mag = 0;
    IMU.getCalibration(&system, &gyro, &accel, &mag);
    
    imu::Vector<3> euler = IMU.getVector(Adafruit_BNO055::VECTOR_EULER);
    rot = euler.x(); //Legg til dataen i vector;
    
    /*Serial.print(rot);
    Serial.print("; Calibration: ");
    Serial.println(gyro);*/
    Heading[cnt] = rot;
    euler = IMU.getVector(Adafruit_BNO055::VECTOR_LINEARACCEL).x();
    acclX[cnt] = euler.x();
    acclY[cnt] = euler.y();
    euler = IMU.getVector(Adafruit_BNO055::VECTOR_GYROSCOPE);
    angVel[cnt] = euler.z();
    }


  if (PMW){
    PMW3360_DATA SensorData = MouseSensor.readBurst();
    Serial.println("Data quality: " + SensorData.SQUAL);
    if (SensorData.isOnSurface && SensorData.isMotion){
      x[cnt] = SensorData.dx*cos(DEG_TO_RAD*rot)+SensorData.dy*sin(DEG_TO_RAD*rot); //Les og prosseser x-data
      y[cnt] = SensorData.dy*cos(DEG_TO_RAD*rot)-SensorData.dx*sin(DEG_TO_RAD*rot); //Les og prosseser y-data
    }
  }
  
  cnt++;
 // Serial.println(cnt);
}

void startServer(){
  //Init server
  WiFi.softAP(ssid, password);
  IP = WiFi.softAPIP();

  //Attach functions to queries
  server.onNotFound(notFound);
  server.on("/data.json", HTTP_GET, [](AsyncWebServerRequest *request){sendData(request, GenerateData());});
  server.on("/state", HTTP_GET, [](AsyncWebServerRequest *request){sendData(request, GenerateResponse());});
  server.on("/play", HTTP_GET, [] (AsyncWebServerRequest *request){StartPlay(request);});
  ///////////////

  //Start
  server.begin();
}

void StartPlay(AsyncWebServerRequest *request){
  bool good = true;
  //Start Game
  Serial.println("Request get, start game!");
  //Send response 
  if (good){
     request->send(200, "application/json", "1");
  }
  else{
     request->send(200, "application/json", "0");
  }
  Serial.println("Everything good, feedback sent!");
}

void notFound(AsyncWebServerRequest *request){
  request->send(404, "application/json", "Invalid data path"); 
}

void sendData(AsyncWebServerRequest *request, String Data){
  Serial.println("Data request get, sending...");
  request->send(200, "application/json", Data.c_str());
  //Serial.println(Data);
}

String GenerateResponse(){
  StaticJsonDocument<100> doc;
  JsonArray resp = doc.createNestedArray("Response");
  resp.add(1);
  
  String body;
  serializeJsonPretty(doc, body);
  return body;
}
 
String GenerateData(){
  StaticJsonDocument<2000> doc;
  
  JsonArray xVal = doc.createNestedArray("rotation");
  for (int a = 0; a < 10; a++){
    for (int i = 0; i<10; i++){
      xVal.add(i);  
    }
  }

  /*JsonArray thetaVal = doc.createNestedArray("theta");
  for (auto i : theta){
    thetaVal.add(i);
  }*/

  String body;
  serializeJsonPretty(doc, body);  
  return body;
}
