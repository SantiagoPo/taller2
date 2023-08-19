//Integrantes del grupo:
//Santiago Polanco
//Fabian Carvajal
int LED = 11;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  
    digitalWrite(LED, HIGH);
    delay(15000);
    digitalWrite(LED, LOW);
    delay(20000);
    digitalWrite(LED, HIGH);
    delay(15000);
    digitalWrite(LED, LOW);
    delay(2000);
  
}

