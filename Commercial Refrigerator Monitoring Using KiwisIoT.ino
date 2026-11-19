#include <OneWire.h>
#include <DallasTemperature.h>
#include <KiwisIoT.h>

// Wi-Fi credentials
const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";

KiwisIoT kiwisiot(ssid, pass, topic);

// DS18B20 connection
#define SENSOR_PIN D2

OneWire oneWire(SENSOR_PIN);
DallasTemperature sensors(&oneWire);

// Example temperature threshold
const float TEMP_LIMIT = 5.0;

unsigned long lastSend = 0;
const unsigned long SEND_INTERVAL = 5000;

void setup()
{
  Serial.begin(115200);

  sensors.begin();

  kiwisiot.begin();

  Serial.println("Commercial Refrigerator Monitoring Started");
}

void loop()
{
  kiwisiot.run();

  if (millis() - lastSend >= SEND_INTERVAL)
  {
    lastSend = millis();

    sensors.requestTemperatures();

    float temperature = sensors.getTempCByIndex(0);

    if (temperature != DEVICE_DISCONNECTED_C)
    {
      Serial.print("Refrigerator Temperature: ");
      Serial.print(temperature);
      Serial.println(" C");

      String status =
          (temperature > TEMP_LIMIT)
          ? "HIGH TEMPERATURE"
          : "NORMAL";

      Serial.print("Refrigerator Status: ");
      Serial.println(status);

      // Send temperature to Channel 0
      kiwisiot.send("0", String(temperature, 2));

      // Send status to Channel 1
      kiwisiot.send("1", status);
    }
    else
    {
      Serial.println("Temperature Sensor Disconnected");
    }
  }
Credits