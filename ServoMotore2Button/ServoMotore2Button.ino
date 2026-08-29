// Includo la libreria Servo.h

#include <Servo.h>

// Dichiarazione pin input

int button1 = 13;
int button2 = 12;

int state1 = 0;
int state2 = 0;

// Dichiarazione servo 1

int servo1 = 11;
Servo servo;

// setup

void setup() {

  // Pin input

  pinMode(button1, INPUT);
  pinMode(button2, INPUT);

  // Pin servo 1

  servo.attach(servo1);
  Serial.begin(9600);

}

// loop

void loop() {

  // Asseganzione stati ai tasti

  state1 = digitalRead(button1);
  state2 = digitalRead(button2);

  // Tasto 1 premuto

  if (state1 == 1) {

    // Servo impostato a -180

    servo.write(-180);
    Serial.println("Servo impostato a -180 gradi");

  }
  
  // Tasto 2 premuto

  if (state2 == 1) {

    // Servo impostato a 180
    
    servo.write(180);
    Serial.println("Servo impostato a 180 gradi");

  }

}