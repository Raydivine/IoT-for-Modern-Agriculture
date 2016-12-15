#include <SoftwareSerial.h>
#include <ESP8266WiFi.h>
#include <SimpleDHT.h>
#include "ThingSpeak.h"
#include "Task.h"
#include "Network.h"
#include "Setting.h"
#include "Photoresistor.h"
#include "WaterLevelSensor.h"

unsigned long monitorChannel = 169688;
const char *monitorWrite = "GB91TIAKXFPD6JNX"; //The Key for write data to channel
const char *monitorRead  = "0N7QYR503X9K51FA"; //The Key for read data from channel

unsigned long analysisChannel = 171094;
const char *analysisWrite = "4JCJEWOPSIBJHMV2"; 
const char *analysisRead  = "S0Z31XZI8CHT9JDQ"; 

unsigned long taskChannel = 171780;
const char *taskWrite = "XY2RZA5HK5ADFW2F"; 
const char *taskRead  = "RJI8HKEATJP2H5EM"; 

const char* ssid = "WongIoT";
const char* password = "nodemcu888";

WiFiClient  client;
SimpleDHT11 dht11;

void setup() {
  Serial.begin(BAUDRATE);
  delay(10);
  connectToWifi(ssid,password); 
  
  pinMode( LED       , OUTPUT );
  pinMode( FAN       , OUTPUT );
  pinMode( COOLER    , OUTPUT );
  pinMode( HEATER    , OUTPUT );
  pinMode( WATER_PUMP, OUTPUT );

  pinMode( PH_POWER  , OUTPUT );
  pinMode( WL_POWER  , OUTPUT );

  ThingSpeak.begin(client);
  Serial.println("\n");
}

void loop(){
  byte temperature = 0, humidity = 0;
  int illuminance = 0, waterLevel = 0;

  illuminance = readBrightness(PHOTO_PIN);
  waterLevel  = readWaterLevel(WATER_LEVEL_PIN);
  dht11.read(DHT11_PIN, &temperature, &humidity, NULL);

  Serial.printf("Temperature       (celcius)    : %d C\n", temperature);
  Serial.printf("Relative Humidity (percent)    : %d %\n", humidity);
  Serial.printf("Illuminance       (Brightness) : %d lux\n", illuminance);
  Serial.printf("Water level       (Millimeter) : %d mm\n\n", waterLevel);

  Serial.println("Writting data to ThingSpeak......");
  ThingSpeak.setField(1, (int)temperature);
  ThingSpeak.setField(2, (int)humidity);
  ThingSpeak.setField(3, illuminance);
  ThingSpeak.setField(4, waterLevel);
  ThingSpeak.writeFields(monitorChannel, monitorWrite);  

  control_LED(taskChannel,1);

  Serial.println("ThingSpeak only accept updates every 15 seconds, please wait for next update\n\n");
  delay(13000);  // Due to read LED brighntess need 3 second, so set the delay value as 13 second
}
