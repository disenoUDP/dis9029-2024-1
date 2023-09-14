/** Trabajo de Sofia Abdallah y Nora Flores
12 de Septiembre 2023
Un botón que deja encendido o apagado
  */

const int buttonPin = 2;  
const int ledPin = 13;    
int buttonState = 0;      
int lastButtonState = 0;  
int ledState = LOW;      

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); 
  pinMode(ledPin, OUTPUT);   

  Serial.begin(9600);       
}

void loop() {
  buttonState = digitalRead(buttonPin);
 Serial.println(buttonState);

// Al presionar el botón se mantendrá prendido o apagado el LED
  if (buttonState != lastButtonState) {
    if (buttonState == LOW) {
      // Cambiar el estado del LED cuando el botón es presionado
      ledState = !ledState;
      digitalWrite(ledPin, ledState);
    }
    delay(50);  
  }
  lastButtonState = buttonState;
}