// Dichiarazione variabili pin digitali e analogici

int vrY = A0;
int buttonSW = 13;

int ledY = 12;
int ledSW = 11;

// Dichiarazione variabili stati pin

int valY;
int valSW;

// setup

void setup() {

  // Input/Output
  
  pinMode(buttonSW, INPUT_PULLUP);

  pinMode(ledY, OUTPUT);
  pinMode(ledSW, OUTPUT);
  
}

// loop

void loop() {

  // Assegnazione stati ai corrispettivi pin
  
  int valY = analogRead(vrY);
  int valSW = digitalRead(buttonSW);

  // Caso tastoSW premuto o no
  
  if (valSW == 1) {

    digitalWrite(ledSW, HIGH);
    
  }

  // Tasto non premuto
  
  else {

    digitalWrite(ledSW, LOW);
    
  }

  // Caso Joystick diretto a sinistra
  
  if (valY < 200) {

    digitalWrite(ledY, HIGH);
    
  }

  // Joystick fermo
  
  else {

    digitalWrite(ledY, LOW);
    
  }
  
}
