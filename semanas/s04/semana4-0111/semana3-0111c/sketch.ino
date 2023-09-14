/** Trabajo de Spfia Abdallah y Nora Flores
Botón que prende y apaga LEDS según su estado
  */

const int ledPin1 = 13;   
const int ledPin2 = 12; 
const int buttonPin = 2;  
int ledState = 0;       
int lastButtonState = HIGH; 
int buttonState;        
int counter = 0;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
Serial.begin(9600);
}

void loop() {
 
  int reading = digitalRead(buttonPin);
  Serial.print(counter);
  Serial.print(counter%3);
  Serial.println();
  

  if (reading != lastButtonState) {
    if (reading == HIGH) {
      counter++; 
    }
  }
  lastButtonState = reading; 
  delay(100);
  
  // Al presionar y soltar el botón se prenden y apagan las LED, dependiendo del estado del botón.
  if(counter%3 == 0) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
  
  } else if(counter%3 == 1) {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);

  } else if(counter%3 == 2){
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
  }
}