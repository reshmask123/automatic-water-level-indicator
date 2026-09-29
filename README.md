# automatic-water-level-indicator
An Arduino-based automatic water level indicator using an HC-SR04 ultrasonic sensor and LEDs.
# 💧 Automatic Water Level Indicator

An Arduino-based water level indicator using an HC-SR04 ultrasonic sensor and LEDs.

## Components

- Arduino Uno R3
- HC-SR04 Ultrasonic Sensor
- Green LED
- Yellow LED
- Red LED
- 3 × 220Ω Resistors
- Jumper Wires

## Pin Connections

| Component | Arduino |
|---|---|
| VCC | 5V |
| TRIG | D7 |
| ECHO | D8 |
| GND | GND |
| Green LED | D2 |
| Yellow LED | D3 |
| Red LED | D4 |

## Working

🟢 More than 30 cm → Low Water Level

🟡 15–30 cm → Medium Water Level

🔴 15 cm or less → High Water Level

## Software

- Arduino IDE
- Tinkercad Circuits

## Future Improvements

- Add buzzer alert
- Add LCD display
- Add automatic water pump control
- Add IoT monitoring
