// Embedded Smart Parking System
// Arduino-based Sensor Parking Automation

// LED Pins
int led1 = 10;
int led2 = 11;
int led3 = 12;

// Buzzer Pin
int buzzer = 13;

// Sensor Pins
int sensor1 = 3;
int sensor2 = 4;
int sensor3 = 5;

void setup() {

  // Set LED pins as OUTPUT
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  // Set buzzer as OUTPUT
  pinMode(buzzer, OUTPUT);

  // Set sensor pins as INPUT
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(sensor3, INPUT);
}

void loop() {

  // Slot 1 Check
  if (digitalRead(sensor1) == HIGH) {
    digitalWrite(led1, LOW);   // Slot free
  } 
  else {
    digitalWrite(led1, HIGH);  // Slot occupied
    tone(buzzer, 7000, 400);
  }

  // Slot 2 Check
  if (digitalRead(sensor2) == HIGH) {
    digitalWrite(led2, LOW);
  } 
  else {
    digitalWrite(led2, HIGH);
    tone(buzzer, 9000, 500);
  }

  // Slot 3 Check
  if (digitalRead(sensor3) == HIGH) {
    digitalWrite(led3, LOW);
  } 
  else {
    digitalWrite(led3, HIGH);
    tone(buzzer, 3000, 800);
  }
}
