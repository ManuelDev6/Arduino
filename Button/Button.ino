// Dichiarazione variabili utili al programma

int led = 13;
int button = 12;

int state = 0;

// Setup

void setup() {

  // Dichiarazione pin input/output

  pinMode(led, OUTPUT);
  pinMode(button, INPUT);

  Serial.begin(9600);

}

// Loop

void loop() {

  // Stato button

  state = digitalRead(button);

  // Caso tasto premuto

  if (state == 1) {

    digitalWrite(led, HIGH);
    Serial.println("Tasto premuto, led acceso");

  }

  // Caso tasto non premuto
  
  else {

    digitalWrite(led, LOW);
    Serial.println("Tasto non premuto, led spento");

  }
  
}