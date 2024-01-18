int LED = 13;
int BUZZER = 4;
int BUTTON = 2;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  if (digitalRead(BUTTON)== HIGH)
  {
    digitalWrite(LED, HIGH);
    digitalWrite(BUZZER, LOW);
    delay(500);

    digitalWrite(LED, LOW);
    digitalWrite(BUZZER, HIGH);
    delay(500);

    digitalWrite(BUZZER, LOW);
  }

}
