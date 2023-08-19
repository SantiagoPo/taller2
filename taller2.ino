int LED = 11;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  
    digitalWrite(LED, HIGH);
    delay(1500);
    digitalWrite(LED, LOW);
    delay(2000);
    digitalWrite(LED, HIGH);
    delay(1500);
    digitalWrite(LED, LOW);
    delay(500);
  
}

