# GAS-LEAKAGE-DETECTION-AUTOMATION-SHUTOFF-SYSTEM
Gas Leak Detection and Automatic Shutoff System is an IoT-based safety system that detects gas leaks using an MQ-2 sensor and ESP32. When gas levels exceed a safe limit, it activates a buzzer, displays a warning on an OLED screen, and automatically shuts off the gas supply through a relay, helping prevent accidents and improving safety.
# Gas Leak Detection & Automatic Shutoff System

The Gas Leak Detection & Automatic Shutoff System is an IoT-based safety project designed to detect hazardous gas leaks and automatically take preventive action. Using an ESP32 microcontroller and MQ-2 gas sensor, the system continuously monitors gas concentration levels in the environment. When the detected gas level exceeds a predefined safety threshold, the system activates an alarm, displays a warning message on an OLED screen, and automatically shuts off the gas supply through a relay-controlled valve.

This project helps improve safety in homes, laboratories, industries, and commercial kitchens by reducing the risk of fire, explosions, and gas-related accidents.

## Features

* Real-time gas leak detection using MQ-2 sensor
* Continuous monitoring with ESP32
* OLED display for live gas level monitoring
* Audible alarm using buzzer
* Visual warning through LED indicator
* Automatic gas supply shutoff using relay
* Fast response during emergency situations
* Suitable for smart home and industrial safety applications

## Components Used

| Component               | Quantity    |
| ----------------------- | ----------- |
| ESP32 Development Board | 1           |
| MQ-2 Gas Sensor         | 1           |
| OLED Display (SSD1306)  | 1           |
| Buzzer                  | 1           |
| LED                     | 1           |
| Relay Module            | 1           |
| Jumper Wires            | As Required |
| Breadboard              | 1           |

## Working Principle

1. The MQ-2 sensor continuously detects gas concentration in the surrounding environment.
2. The ESP32 reads sensor values through its analog input pins.
3. Gas readings are displayed on the OLED screen in real time.
4. If gas levels remain within the safe range, the system continues monitoring.
5. When gas concentration exceeds the threshold:

   * The buzzer sounds an alarm.
   * The warning LED turns ON.
   * A warning message appears on the OLED display.
   * The relay is activated to shut off the gas supply automatically.
6. The system returns to normal operation when gas levels become safe again.

## Circuit Connections

| Component          | ESP32 Pin |
| ------------------ | --------- |
| MQ-2 Analog Output | GPIO34    |
| OLED SDA           | GPIO21    |
| OLED SCL           | GPIO22    |
| Buzzer             | GPIO25    |
| LED                | GPIO26    |
| Relay IN           | GPIO27    |

## Software Requirements

* Arduino IDE
* ESP32 Board Package
* Adafruit GFX Library
* Adafruit SSD1306 Library
* Wokwi Simulator (Optional)

## Applications

* Smart Homes
* Industrial Safety Systems
* Laboratories
* Commercial Kitchens
* LPG Storage Areas
* Chemical Processing Units

## Future Enhancements

* Mobile app notifications
* SMS alerts using GSM module
* Cloud-based monitoring dashboard
* Wi-Fi remote monitoring
* Multi-gas detection support
* AI-based leak prediction system

## Project Outcome

The project successfully demonstrates an automated gas safety solution capable of detecting gas leaks, alerting users, and automatically shutting off the gas supply. This reduces human intervention during emergencies and enhances overall safety.

## Author

**Swathi**
Electronics and Communication Engineering (ECE) Student
Future Software Engineer
