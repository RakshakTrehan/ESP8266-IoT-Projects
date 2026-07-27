# LED Toggle using Capacitive Touch Sensor

A NodeMCU ESP8266 project that demonstrates touch-based LED control using a capacitive touch sensor (TTP223). The LED changes state with each touch using edge detection and software debouncing, providing reliable and responsive input handling.

---

## 📌 Overview

This project replaces a conventional push button with a capacitive touch sensor to control an LED. Instead of requiring the sensor to be continuously pressed, a single touch toggles the LED between ON and OFF states.

---

## 🛠 Hardware Used

- NodeMCU ESP8266
- TTP223 Capacitive Touch Sensor
- LED
- 220Ω Resistor
- Breadboard
- Jumper Wires
- Micro USB Cable

---

## 🔌 Circuit Connections

| NodeMCU Pin | Component |
|-------------|-----------|
| D1 (GPIO5) | Touch Sensor OUT |
| D2 (GPIO4) | LED Anode (+) |
| 3.3V | Touch Sensor VCC |
| GND | Touch Sensor GND |
| GND | LED Cathode (-) through 220Ω Resistor |

---

## ⚙️ Working

1. The NodeMCU continuously monitors the touch sensor output.
2. A touch generates a HIGH signal from the sensor.
3. The program detects the rising edge of this signal.
4. The LED state is toggled between ON and OFF.
5. A short software debounce delay prevents multiple toggles from a single touch.

---

## 📷 Circuit Diagram

![Circuit Diagram](Touch_Sensor_Circuit.jpeg)

---

## 💡 Key Concepts

- GPIO Digital Input
- GPIO Digital Output
- Capacitive Touch Sensing
- Edge Detection
- Software Debouncing
- State-Based Programming
- Embedded Systems Programming

---

## 🖥 Platform

- **Board:** NodeMCU ESP8266
- **IDE:** Arduino IDE
- **Language:** Arduino C++
