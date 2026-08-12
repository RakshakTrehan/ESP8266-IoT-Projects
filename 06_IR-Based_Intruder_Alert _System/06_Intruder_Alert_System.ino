#define IR_SENSOR D5
#define LED1 D1
#define LED2 D2
#define BUZZER D6

void setup() {
  pinMode(IR_SENSOR, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(BUZZER, OUTPUT);

  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(BUZZER, LOW);

  Serial.begin(115200);
}

void loop() {

  int sensorValue = digitalRead(IR_SENSOR);

  if (sensorValue == LOW) {

    Serial.println("INTRUDER DETECTED!");

    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    digitalWrite(BUZZER, HIGH);

    delay(300);

    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);

    delay(300);

  } 
  else {

    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(BUZZER, LOW);

    Serial.println("System Normal");

    delay(100);
  }
}