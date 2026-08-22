// Dichiarazione variabili pin digitali

int led1 = 13;
int led2 = 12;

int time = 1000;

// Setup

void setup() {

  // Pin led dichiarati come output

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

}

// Loop

void loop() {

  // Led 1 acceso

  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);

  delay(time);

  // Led 2 acceso
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);

  delay(time);

}