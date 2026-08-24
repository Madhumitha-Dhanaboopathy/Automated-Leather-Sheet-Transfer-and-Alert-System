#define SENSOR_PIN 2
#define BUZZER_PIN 3
#define LED_PIN 4
#define ENA 5
#define IN1 8
#define IN2 9
#define RELAY_PIN 10
void setup() {
  pinMode(SENSOR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(RELAY_PIN, OUTPUT);
}
void loop() {
  int sheetDetected = digitalRead(SENSOR_PIN);
  if (sheetDetected == LOW) {  
    digitalWrite(RELAY_PIN, HIGH);
    digitalWrite(ENA, HIGH);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(BUZZER_PIN, LOW);
    digitalWrite(LED_PIN, LOW);
  } else {
    digitalWrite(RELAY_PIN, LOW);
    digitalWrite(ENA, LOW);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(BUZZER_PIN, HIGH);
    digitalWrite(LED_PIN, HIGH);
  }
}

