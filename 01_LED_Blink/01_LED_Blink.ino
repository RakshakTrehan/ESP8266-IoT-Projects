// NodeMCU ESP8266 LED Blink
// Blinks an external LED connected to GPIO5 (D1)
// and prints the LED status to the Serial Monitor.

const int ledPin = 5; 

void setup() {

  // Initialize the serial communication for debugging

  Serial.begin(115200);
  // Initialize the digital pin as an output
  pinMode(ledPin, OUTPUT);
 Serial.println("NodeMCU Initialized: Starting LED Sequence.");
}
void loop() {
  digitalWrite(ledPin, HIGH);   // Turn the LED on (HIGH voltage level)
  Serial.println("LED Status: ON");
  delay(1000);                  // Wait for 1000 milliseconds (1 second)
  digitalWrite(ledPin, LOW);    // Turn the LED off (LOW voltage level)
  Serial.println("LED Status: OFF");
  delay(1000);                  // Wait for 1000 milliseconds (1 second)
}

