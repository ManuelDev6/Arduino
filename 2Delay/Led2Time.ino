// Dichiarazione variabili pin digitali

int led = 13;

int button1 = 12;
int button2 = 11;

// Stati button

int state1 = 0;
int state2 = 0;

// Dichiarazione variabili time

int time1 = 1000;
int time2 = 500;

int time;

// Setup

void setup() {

  // Pin input/output

  pinMode(led, OUTPUT);

  pinMode(button1, INPUT);
  pinMode(button2, INPUT);

  Serial.begin(9600);

}

// Loop

void loop() {

  // Assegnazione stati button

  state1 = digitalRead(button1);
  state2 = digitalRead(button2);

  // Time 1

  if (state1 == 1) {

    time = time1;

  }

  // Time 2

  if (state2 == 1) {

    time = time2;

  }

  // Led acceso

  digitalWrite(led, HIGH);
  delay(time);

  // Led spento
  
  digitalWrite(led, LOW);
  delay(time);

}