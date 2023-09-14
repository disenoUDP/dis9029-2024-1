// agregar texto que describa el código
// agregar autores y fecha

const int buttonPin = 2; // Pin del botón
const int ledPin1 = 13;   // Primer LED
const int ledPin2 = 12;  // Segundo LED
const int ledPin3 = 11; // tercer LED

int estadoLed = 0;        // Estado actual de los LEDs
int lastButtonState = HIGH; // Último estado del botón
int estadoboton;         // Estado actual del botón
int counter = 0;

void setup(){
  pinMode(buttonPin, INPUT_PULLUP); //entrada
  pinMode(ledPin1, OUTPUT); //salida
  pinMode(ledPin2, OUTPUT); //salida
  pinMode(ledPin3, OUTPUT); //salida
  Serial.print(counter%3);
  Serial.begin(9600);
}

void loop(){
 // Leer el estado actual del botón
  int reading = digitalRead(buttonPin);

// control de flujo para boton como contador
  if (reading != lastButtonState) {
    if (reading == LOW) { //mantener boton abajo
      counter++; // atajo para sumar 1 a una variable
    }
  }
    lastButtonState = reading; 
  delay(500);
  // iterando por valores de counter modulo 3
  if(counter%3 == 0) {
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin1, HIGH);
    delay(1000);
    digitalWrite(ledPin1, LOW);
    delay(1000);
    digitalWrite(ledPin2, HIGH);
    delay(1000);
    digitalWrite(ledPin2, LOW);
    delay(1000);
    digitalWrite(ledPin3, HIGH);
    delay(1000);
    digitalWrite(ledPin3, LOW);
    delay(1000);
  
  } else if(counter%3 == 1) {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
    delay(200);
    digitalWrite(ledPin2, LOW);
    delay(200);
    digitalWrite(ledPin3, LOW);

  } else if(counter%3 == 2){
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, HIGH);
    delay(200);
    digitalWrite(ledPin3, LOW);
    delay(200);
  }
}