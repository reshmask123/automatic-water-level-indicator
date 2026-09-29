const int trigPin = 7;
const int echoPin = 8;

const int greenLED = 2;
const int yellowLED = 3;
const int redLED = 4;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  long duration;
  int distance;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.0343 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, LOW);

  if (distance > 30) {
    digitalWrite(greenLED, HIGH);
  }
  else if (distance > 15 && distance <= 30) {
    digitalWrite(yellowLED, HIGH);
  }
  else {
    digitalWrite(redLED, HIGH);
  }

  delay(500);
}
