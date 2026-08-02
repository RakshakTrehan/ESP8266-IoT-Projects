/*
 * Project: Smart Detector using IR Sensor
 * Board: NodeMCU ESP8266
 *
 * Detects nearby obstacles using an IR sensor.
 * When an obstacle is detected, the LED and buzzer
 * are activated to provide visual and audible alerts.
 */

// Pin Definitions
const int IR_SENSOR_PIN = 5;   // D1 (GPIO5)
const int BUZZER_PIN    = 4;   // D2 (GPIO4)
const int LED_PIN       = 14;  // D5 (GPIO14)

void setup() {

  // Initialize Serial Monitor
  Serial.begin(115200);

  // Configure pin modes
  pinMode(IR_SENSOR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);

  // Ensure outputs start OFF
  digitalWrite(BUZZER_PIN, LOW);
  digitalWrite(LED_PIN, LOW);

  Serial.println("Smart Detector Initialized");
}

void loop() {

  // Read IR sensor state
  bool obstacleDetected = (digitalRead(IR_SENSOR_PIN) == LOW);

  if (obstacleDetected) {

    Serial.println("Obstacle Detected");

    digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, HIGH);

  } else {

    Serial.println("Area Clear");

    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);
  }

  delay(100);
}