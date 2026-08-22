// Dichiarazione variabili pin digitali

int led1 = 13;
int led2 = 12;
int led3 = 11;

// Variabili time

int time1 = 4000;
int time2 = 2000;

// Setup

void setup() {

  // Assegnazione pin output

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

}

// Loop

void loop() {

  // Accensione faro verde

  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);

  delay(time1);

  // Accensione faro giallo

  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);

  delay(time2);

  // Accensione faro rosso
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);

  delay(time1);

}