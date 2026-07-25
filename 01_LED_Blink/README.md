# LED Blink

A basic ESP8266 NodeMCU project that demonstrates digital output by blinking an external LED connected to a GPIO pin. The project also sends LED status updates to the Serial Monitor for debugging and verification.

---

## 📌 Overview

This project blinks an LED connected to the NodeMCU ESP8266 at one-second intervals while printing its current state to the Serial Monitor.

It serves as the introductory project for learning GPIO control and programming on the ESP8266 platform.

---

## 🛠 Components Used

- NodeMCU ESP8266
- LED
- 220Ω Resistor
- Breadboard
- Jumper Wires
- Micro USB Cable

---

## 🔌 Circuit Connections

| NodeMCU Pin | Component |
|-------------|-----------|
| D1 (GPIO5)  | LED Anode (+) |
| GND         | LED Cathode (-) through 220Ω Resistor |

---

## ⚙️ Working Principle

1. The NodeMCU initializes serial communication at **115200 baud**.
2. GPIO5 (D1) is configured as an output pin.
3. The LED turns ON for one second.
4. The LED turns OFF for one second.
5. The current LED status is displayed on the Serial Monitor.
6. The process repeats continuously.

---

## 📷 Circuit Diagram

> *(Insert `LED_Blink_Circuit.png` here)*

---

## 💻 Files Included

- `01_LED_Blink.ino`
- `LED_Blink_Circuit.png`
- `README.md`

---

## 📚 Concepts Demonstrated

- ESP8266 NodeMCU Programming
- Digital Output
- GPIO Control
- Serial Communication
- Embedded Systems Fundamentals

---

## 🚀 Platform

- Board: NodeMCU ESP8266
- IDE: Arduino IDE
- Language: Arduino C++
