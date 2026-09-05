// Dichiarazione pin digitali e analogici

int vrY = A0;
int vrX = A1;

int buttonSW = 13;

int ledX1 = 12;
int ledX2 = 11;

int ledY1 = 10;
int ledY2 = 9;

int ledSW = 8;

// Dichiarazione variabili stati pin

int stateY;
int stateX;

int stateSW;

// setup

void setup() {

  // Input/Output

  pinMode(buttonSW, INPUT_PULLUP);

  pinMode(ledX1, OUTPUT);
  pinMode(ledX2, OUTPUT);

  pinMode(ledY1, INPUT);
  pinMode(ledY2, INPUT);

  pinMode(ledSW, OUTPUT);
  
}

// loop

void loop() {

  // Assegnazione stati ai corrispettivi pin
  
  stateY = analogRead(vrY);
  stateX = analogRead(vrX);

  stateSW = digitalRead(buttonSW);

  // Caso tasto SW premuto
  
  if (stateSW == 1) {

    digitalWrite(ledSW, HIGH);
    
  }

  // tasto SW non premuto
  
  else {

    digitalWrite(ledSW, LOW);
    
  }

  // Joystick a destra
  
  if (stateX < 200) {

    digitalWrite(ledX1, HIGH);
    digitalWrite(ledX2, LOW);
    
  }

  // Joystick a sinistra
  
  else if(stateX > 800) {

    digitalWrite(ledX1, LOW);
    digitalWrite(ledX2, HIGH);
    
  }

  // Joystick non su cordinata X
  
  else {

    digitalWrite(ledX1, LOW);
    digitalWrite(ledX2, LOW);
    
  }

  // Joystick sù
  
  if (stateY < 200) {

    digitalWrite(ledY1, HIGH);
    digitalWrite(ledY2, LOW);
    
  }

  // Joystick giù
  
  else if(stateY > 800) {

    digitalWrite(ledY1, LOW);
    digitalWrite(ledY2, HIGH);
    
  }

  // Joystick non su cordinata Y
  
  else {

    digitalWrite(ledY1, LOW);
    digitalWrite(ledY2, LOW);
    
  }
  
}
