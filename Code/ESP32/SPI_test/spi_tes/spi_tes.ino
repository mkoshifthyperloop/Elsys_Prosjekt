#include <SPI.h>

#define HSPI_MISO 12
#define HSPI_MOSI 13
#define HSPI_SCLK 14
#define HSPI_SS 27

#if CONFIG_IDF_TARGET_ESP32S2
#define VSPI FSPI
#endif

static const int spiClk = 500000; // 500kHz

SPIClass* hspi = NULL;

void setup(){
  //SPI setup
  hspi = new SPIClass(HSPI);
  hspi->begin(HSPI_SCLK, HSPI_MISO, HSPI_MOSI, HSPI_SS);
  pinMode(HSPI_SS, OUTPUT);

  //Serial setup
  Serial.begin(115200);
  
}

void loop(){
  byte product_id = 0xFF;
  uint8_t id = read_id(product_id);
  Serial.println(id);
  delay(1000);
}

uint8_t read_id(byte product_id){
  hspi->beginTransaction(SPISettings(spiClk, MSBFIRST, SPI_MODE3));
  digitalWrite(HSPI_SS, LOW);
  uint8_t id = hspi->transfer(product_id);
  digitalWrite(HSPI_SS, HIGH);
  hspi->endTransaction();
  return id;
}
