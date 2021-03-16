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
int x[1000] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int y[1000] = {};
double Heading[1000] = {};
double theta[1000] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
double acclX[1000] = {};
double acclY[1000] = {};
double angVel[1000] = {};
int cnt = 0;

//Network things
const char* ssid = "ESP32-Access-Point";
const char* password = "123456789";
IPAddress IP;
AsyncWebServer server(80); // Create AsyncWebServer object on port 80

//Sensorer
PMW3360 MouseSensor;
Adafruit_BNO055 IMU = Adafruit_BNO055(-1, 0x28);
#define SpiSlaveSelect 10

//Andre ting
#define BaudRate 115200
bool active = true;
#define SampleDelay 100000 //Micro seconds


void setup(){
  // Serial port for debugging purposes
  Serial.begin(BaudRate);

  startServer();
  Serial.println(IP);
  
  delay(10);

  if(!IMU.begin())
  {
    /* There was a problem detecting the BNO055 ... check your connections */
    Serial.print("Ooops, no BNO055 detected ... Check your wiring or I2C ADDR!");
    while(1);
  }
  int8_t temp = IMU.getTemp();
  /*Serial.print("Current Temperature: ");
  Serial.print(temp);
  Serial.println(" C");
  Serial.println("");*/
  
  IMU.setExtCrystalUse(true);
  
 
  
}

void loop(){
  
  while (active){
    int Time = micros();
    //GetData();
    while (micros() < Time + SampleDelay){}
    //Serial.println(Heading[cnt-1]);
  }

  if (micros() > 10000000){ active = false;}
  
}

void GetData(){
  //Read IMU
  imu::Vector<3> euler = IMU.getVector(Adafruit_BNO055::VECTOR_EULER);
  float rot = euler.x(); //Legg til dataen i vector;
  Heading[cnt] = rot;
  euler = IMU.getVector(Adafruit_BNO055::VECTOR_LINEARACCEL).x();
  acclX[cnt] = euler.x();
  acclY[cnt] = euler.y();
  euler = IMU.getVector(Adafruit_BNO055::VECTOR_GYROSCOPE);
  angVel[cnt] = euler.z();
  /*
  //Read Mouse
  PMW3360_DATA SensorData = MouseSensor.readBurst();
  if (SensorData.isOnSurface && SensorData.isMotion){
    x.push_back(SensorData.dx*cos(DEG_TO_RAD*rot)+SensorData.dy*sin(DEG_TO_RAD*rot); //Les og prosseser x-data
    y[sizeof(y)] = SensorData.dy*cos(DEG_TO_RAD*rot)-SensorData.dx*sin(DEG_TO_RAD*rot); //Les og prosseser y-data
  }*/
  cnt++;
 // Serial.println(cnt);
}

void startServer(){
  //Init server
  WiFi.softAP(ssid, password);
  IP = WiFi.softAPIP();

  //Attach functions to queries
  server.onNotFound(notFound);
  server.on("/data.json", HTTP_GET, [](AsyncWebServerRequest *request){sendData(request, GenerateJson());});
  ///////////////

  //Start
  server.begin();
}

void notFound(AsyncWebServerRequest *request){
  request->send(404, "application/json", "Invalid data path"); 
}

void sendData(AsyncWebServerRequest *request, String Data){
  request->send_P(200, "application/json", Data.c_str());
}
 
String GenerateJson(){
  StaticJsonDocument<20000> doc;
  
  JsonArray xVal = doc.createNestedArray("rotation");
  for (auto i : x){
    xVal.add(i);  
  }

  /*JsonArray thetaVal = doc.createNestedArray("theta");
  for (auto i : theta){
    thetaVal.add(i);
  }*/

  String body;
  serializeJson(doc, body);  
  return body;
}
