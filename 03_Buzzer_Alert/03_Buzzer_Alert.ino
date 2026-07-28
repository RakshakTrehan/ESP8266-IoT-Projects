const int buzzerPin = D5;

void setup() {
  pinMode(buzzerPin,OUTPUT);
 
 tone(buzzerPin,1000);
      delay(300);
      noTone(buzzerPin);
      delay(300);
   noTone(buzzerPin);

}

void loop() {
 
      
  
}
