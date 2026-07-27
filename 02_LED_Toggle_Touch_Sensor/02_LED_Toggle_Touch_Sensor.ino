* 

 * Project: LED Toggle using Capacitive Touch Sensor

 * Microcontroller: NodeMCU ESP8266

 */
// Pin Definitions    

const int TOUCH_PIN = 5; // NodeMCU D1 (GPIO 5) connected to Sensor OUT

const int LED_PIN   = 4; // NodeMCU D2 (GPIO 4) connected to LED Anode
// State Variables for Toggling

bool ledState = LOW;

bool lastTouchState = LOW;

void setup() {

  pinMode(TOUCH_PIN, INPUT);

  pinMode(LED_PIN, OUTPUT);

  digitalWrite(LED_PIN, ledState);

}

void loop() {

  bool currentTouchState = digitalRead(TOUCH_PIN);
  // Detect Rising Edge (Transition from NOT touched to TOUCHED)

  if (currentTouchState == HIGH && lastTouchState == LOW) {

    ledState = !ledState;               // Toggle the state (HIGH <-> LOW)

    digitalWrite(LED_PIN, ledState);   // Update the physical LED

    delay(50);                          // Software debounce delay

  }
 lastTouchState = currentTouchState;   // Save current state for next iteration

}
