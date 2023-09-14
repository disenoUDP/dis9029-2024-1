/** Trabajo de Sofia Abdallah y Nora Flores
12 de Septiembre de 2023
El botón prende y apaga leds dependiendo de su estado.
*/
 const int buttonPin = 2;
  const int ledPin1 = 13;
  const int ledPin2 = 12; 

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
    counter ++;
  }
  lastButtonState = reading; 
  delay(100);
  
  // Al presionar el botón se prende el LED morado, y al soltarlo se prende el LED celeste
  if(counter%3 == 0) {
    digitalWrite(ledPin1, HIGH);
    delay(500); // se apaga el LED
    digitalWrite(ledPin1, LOW);
   // Al presionar el botón se prende el LED celeste, y al soltarlo se prenden ambas LED
  } else if(counter%3 == 1) {
    digitalWrite(ledPin2, HIGH);
    delay(500); // se apaga el LED
    digitalWrite(ledPin2, LOW);
    // Al presionar el botón se prenden ambas LED, y al soltarlo se prende el LED morado
  } else if(counter%3 == 2) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    delay(500);  // se apaga el LED
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
  }
  
 }
  

  
}



  