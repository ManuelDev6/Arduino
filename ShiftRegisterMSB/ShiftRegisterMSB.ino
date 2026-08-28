// Dichiarazione variabili pin digitali

int data = 13;
int latch = 12;
int clock = 11;

int time = 1000;

// setup

void setup() {

  // Dichiarazione pin Output

  pinMode(data, OUTPUT);
  pinMode(latch, OUTPUT);
  pinMode(clock, OUTPUT);

}

// loop

void loop() {

  // Ciclo for 

  for (int count = 0; count < 8; count++) {

    // Impostazione latch su LOW

    digitalWrite(latch, LOW);

    // Funzione shiftOut

    shiftOut(data, clock, MSBFIRST, (1 << count));

    // Impostazione latch su HIGH
    
    digitalWrite(latch, HIGH);
    delay(time);

  }
}