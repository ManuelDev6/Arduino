// Includo la libreria Servo.h

#include <Servo.h>

// Creazione oggetto Servo

Servo servo;

// setup

void setup() {

  // Dichiarazione pin servo

  servo.attach(13);
  Serial.begin(9600);

}

// loop

void loop() {

  // ServoMotore a -180 gradi

  servo.write(-180);
  Serial.println("ServoMotore a -180");

  delay(1500);

  // ServoMotore a 180 gradi

  servo.write(180);
  Serial.println("ServoMotore a 180");

  delay(1500);

}