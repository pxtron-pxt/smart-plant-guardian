#define LIGHT 2
#define WATER 3
#define SHADE 4

void setup() {
  pinMode(LIGHT, OUTPUT);
  pinMode(WATER, OUTPUT);
  pinMode(SHADE, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    char mood = Serial.read();

    if (mood == 'L') {
      digitalWrite(LIGHT, HIGH);
      delay(2000);
      digitalWrite(LIGHT, LOW);
    } else if (mood == 'W') {
      digitalWrite(WATER, HIGH);
      delay(2000);
      digitalWrite(WATER, LOW);
    } else if (mood == 'S') {
      digitalWrite(SHADE, HIGH);
      delay(2000);
      digitalWrite(SHADE, LOW);
    }
  }
}
