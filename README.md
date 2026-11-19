# Commercial Refrigerator Monitoring Using KiwisIoT

## Project Overview

This project uses IoT technology to monitor commercial refrigerator conditions remotely. The system collects temperature readings and sends them to the KiwisIoT dashboard, helping users monitor cooling performance and identify abnormal temperature changes.

## Hardware Components

- NodeMCU ESP8266
- Temperature sensor
- Connecting wires
- Breadboard
- Power supply

## Software Requirements

- Arduino IDE
- ESP8266 Board Package
- KiwisIoT Arduino Library
- KiwisIoT Dashboard

## Circuit Connections

Connect the temperature sensor to the NodeMCU according to the sensor pin configuration used in the project.

## Working Principle

The ESP8266 reads temperature data from the refrigerator and sends it to the KiwisIoT platform through Wi-Fi. Users can view live temperature readings on the dashboard and monitor refrigerator conditions remotely.

## KiwisIoT Dashboard

- View real-time refrigerator temperature.
- Monitor cooling conditions remotely.
- Identify unusual temperature changes.
- Access monitoring data through the dashboard.

## Configuration

Update your Wi-Fi credentials and KiwisIoT Topic ID in the project configuration.

```cpp
const char* ssid = "YOUR_WIFI_NAME";
const char* pass = "YOUR_WIFI_PASSWORD";
const char* topic = "YOUR_TOPIC_ID";
```

## Applications

- Commercial refrigerators
- Supermarkets and grocery stores
- Restaurants and hotels
- Food storage facilities
- Cold storage monitoring

## Project Reference

**Hackster.io Project:**
[Commercial Refrigerator Monitoring Using KiwisIoT](https://www.hackster.io/harispidy07/commercial-refrigerator-monitoring-using-kiwisiot-4fe404)

**KiwisIoT Platform:**
[https://kiwisiot.com/](https://kiwisiot.com/)

**KiwisIoT GitHub Repository:**
[https://github.com/Kiwistron/KiwisIoT-Projects](https://github.com/Kiwistron/KiwisIoT-Projects)

## Author

**Hariprasath S**

GitHub: [https://github.com/harispidy07](https://github.com/harispidy07)

---

_Smart temperature monitoring for reliable refrigeration management._
