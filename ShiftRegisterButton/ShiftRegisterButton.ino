// Dichiarazione variabili pin digitali

int data = 13;
int latch = 12;
int clock = 11;

int buttonMSB = 10;
int buttonLSB = 9;

// Dichiarazione variabili utili al programma

int stateMSB = 0;
int stateLSB = 0;

int time = 1000;

// setup

void setup() {

  // Pin output

  pinMode(data, OUTPUT);
  pinMode(latch, OUTPUT);
  pinMode(clock, OUTPUT);

  // Pin input

  pinMode(buttonMSB, INPUT);
  pinMode(buttonLSB, INPUT);

}

// loop

void loop() {

  // Assegnazione variabili button

  stateMSB = digitalRead(buttonMSB);
  stateLSB = digitalRead(buttonLSB);

  // Caso MSB

  if (stateMSB == 1) {

    // Ciclo for

    for (int count = 0;count < 8;count++) {

      digitalWrite(latch, LOW);

      // Funzione shiftOut MSB

      shiftOut(data, clock, MSBFIRST, (1 << count));

      digitalWrite(latch, HIGH);
      delay(time);

    }

  }

  // Caso LSB

  if (stateLSB == 1) {

    // Ciclo for

    for (int count = 0;count < 8;count++) {

      digitalWrite(latch, LOW);

      // Funzione shiftOut LSB
      
      shiftOut(data, clock, LSBFIRST, (1 << count));

      digitalWrite(latch, HIGH);
      delay(time);

    }

  }

}