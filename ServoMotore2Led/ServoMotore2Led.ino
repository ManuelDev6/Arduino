// Includo la libreria Servo.h

#include <Servo.h>

// Dichiarazione variabili pin digitali

int led1 = 13;
int led2 = 12;

int servo = 11;
int time = 1500;

// Creazione oggetto servo

Servo servo;

// setup

void setup() {

  // Pin di output

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

  // Pin servo

  servo.attach(servo);
  Serial.begin(9600);

}

// loop

void loop() {

  // Servo a -180

  servo.write(-180);
  Serial.println("Servo motore a -180 gradi");

  // Led 1 acceso

  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);

  delay(time);

  // Servo a 180

  servo.write(180);
  Serial.println("Servo motore a 180 gradi");

  // Led 2 acceso
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);

  delay(time);

}