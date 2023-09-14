/** Botón que enciende un LED mientras se presiona
  */

const int buttonPin = 2;  
const int ledPin = 13;    
int ledState = LOW;      
int buttonState = 0;     

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); 
  pinMode(ledPin, OUTPUT);   
}

void loop() {
  buttonState = digitalRead(buttonPin);

  // Al mantener presionado el botón se prende el LED
  if (buttonState == 0) {
      digitalWrite(ledPin, HIGH);
  } else {
      digitalWrite(ledPin, LOW);
  }
}