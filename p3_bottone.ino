/*
  Progetto Bottone. 
  Accende e spegne un led connesso al pin digitale 13, premendo il bottone connesso al pin 2.
 Il circuito: LED attaccato dal pin 13 a GND, bottone attaccato al pin 2 da +5V, resistore 10K attaccato al pin 2 da GND
*/

// le costanti non cambiano. Qui sono utilizzate per settare i numeri dei pin
const int buttonPin = 2;     // il numero del pin del bottone
const int ledPin =  13;      // il numero del pin del led

// le variabili cambiano
int buttonState = 0;         // variabile per la lettura dello stato del bottone

void setup() {
pinMode(ledPin, OUTPUT);     // inizializza il pin led come output
pinMode(buttonPin, INPUT);   // inizializza il pin bottone come input
}

void loop() {
buttonState = digitalRead(buttonPin);   // legge lo stato del bottone

// verifica se il bottone è schiacciato
if (buttonState == HIGH) {  // se lo è, lo stato del bottone è HIGH
digitalWrite(ledPin, HIGH);   // accende il led
  } else {
digitalWrite(ledPin, LOW);    // spegne il led
  }
}
