/**
  * "Un boton que itera por un menu"
  * Dos secciones de código:
  *  primera sección lee y cambia valores de forma segura
  * segunda sección la estructura de los diferentes estados del menú
  */

const int buttonPin = 2; // Pin del botón
const int ledPin1 = 13;   // Primer LED
const int ledPin2 = 12;  // Segundo LED

int ledState = 0;        // Estado actual de los LEDs
int lastButtonState = HIGH; // Último estado del botón
int buttonState;         // Estado actual del botón
int counter = 0;

void setup() {
  pinMode(buttonPin, |);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // Leer el estado actual del botón
  int reading = digitalRead(buttonPin);
  Serial.print(counter);
  Serial.print(counter%3);
  Serial.println();
  
  // control de flujo para boton como contador
  if (reading != lastButtonState) {
    if (reading == HIGH) {
      counter++; // atajo para sumar 1 a una variable
    }
  }
  lastButtonState = reading; 
  delay(100);
  
  // iterando por valores de counter modulo 3
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