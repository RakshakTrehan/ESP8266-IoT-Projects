/*
 * Project: Rain Detection Alert System
 * Board: NodeMCU ESP8266
 *
 * Description:
 * Detects rainfall using an analog rain sensor and provides
 * visual and audible alerts through an LED and an active buzzer.
 */

// ----------------------------
// Pin Definitions
// ----------------------------
const int RAIN_SENSOR_PIN = A0;   // Analog output from rain sensor
const int BUZZER_PIN      = D1;   // Active buzzer
const int LED_PIN         = D2;   // Status LED

// ----------------------------
// System Configuration
// ----------------------------
const int RAIN_THRESHOLD = 700;   // Lower value indicates more moisture

void setup() {

  // Initialize Serial Monitor
  Serial.begin(9600);

  // Configure output pins
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);

  // Ensure outputs start in the OFF state
  digitalWrite(BUZZER_PIN, LOW);
  digitalWrite(LED_PIN, LOW);

  Serial.println("Rain Detection Alert System Initialized");
}

void loop() {

  // Read the analog value from the rain sensor
  int sensorValue = analogRead(RAIN_SENSOR_PIN);

  // Display sensor value
  Serial.print("Rain Sensor Value: ");
  Serial.println(sensorValue);

  // Check for rain
  if (sensorValue < RAIN_THRESHOLD) {

    digitalWrite(BUZZER_PIN, HIGH);
    digitalWrite(LED_PIN, HIGH);

    Serial.println("Status: Rain Detected");

  } else {

    digitalWrite(BUZZER_PIN, LOW);
    digitalWrite(LED_PIN, LOW);

    Serial.println("Status: No Rain Detected");
  }

  // Update every 500 ms
  delay(500);
}