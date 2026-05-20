# IoT-Based Pesticide Sprayer Control Platform

An IoT-based pesticide spraying prototype developed using ESP32, Bluetooth communication, and a relay-controlled pump system. The project enables wireless control of pesticide spraying using a mobile device.

## Features

- Wireless spray activation using Bluetooth
- ESP32-based control system
- Relay-controlled pump switching
- Remote ON/OFF operation
- Smart agriculture prototype
  
## Tech Stack

- ESP32
- Arduino IDE
- Relay Module
- Bluetooth
- Water Pump
- Battery

## Project Overview

The system uses Bluetooth communication to send commands from a mobile device to the ESP32. The ESP32 processes these commands and controls a relay module connected to the pump. When the relay is activated, the circuit between the battery and pump is completed, allowing pesticide spraying through the nozzle.

## Working Principle

1. Connect mobile device to ESP32 via Bluetooth
2. Send ON/OFF commands
3. ESP32 processes the command
4. Relay activates the pump
5. Battery powers the pump
6. Pesticide is sprayed through the nozzle

## Project Structure
```text
├── README.md
├── pesticide_sprayer.ino
├── images/
    ├── setup.jpg
    ├── esp32-relay.jpg

```

## Design Architecture

- Bluetooth : Sends ON/OFF commands from mobile device to ESP32
- ESP32 : Receives commands and controls relay module
- Relay Module : Switches the pump circuit ON/OFF
- Pump & Battery : Powers the spraying mechanism
- Nozzle : Sprays pesticide evenly
- Container : Stores pesticide liquid

## How to Run

1. Open pesticide_sprayer.ino in Arduino IDE
2. Select ESP32 board and COM port
3. Upload the code
4. Connect hardware components
5. Pair mobile device with ESP32 Bluetooth
6. Send:
    * ON → Start spraying
    * OFF → Stop spraying
      
## Contributors

- Daiwik Koppula
- Akshitha Thoudisetti
- Thanusri Giri
- Chaitanya M
