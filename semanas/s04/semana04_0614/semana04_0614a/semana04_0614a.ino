/**
  * "Un boton que enciende un led mientras se presiona"
  * 
  * const se refiere a variables que no queremos cambiar su valor
  * De esta manera no cometeremos errores de valor entre tarjeta y código
  * 
  * INPUT_PULLUP define al boton como 
  *   LOW cuando no hace contacto estando fisicamente ABAJO
  *   HIGH cuando esta arriba estando fisicamente ARRIBA
  * estos valores son inverson en general cuando se usan otros inputs digitales
  * como conecciones entre circuitos accionados por noDedos
  */

const int buttonPin = 2;  // constante Pin del botón
const int ledPin = 12;    // constnate Pin del LED

int ledState = LOW;       // Estado actual del LED
int buttonState = 0;      // Variable para almacenar el estado del botón

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Configurar el pin del botón como entrada 
  pinMode(ledPin, OUTPUT);   // Configurar el pin del LED como salida
}

void loop() {
  // Leer el estado actual del botón
  buttonState = digitalRead(buttonPin);

  // Comprobar si el estado del botón ha cambiado
  if (buttonState == 0) {
      digitalWrite(ledPin, HIGH);
  } else {
      digitalWrite(ledPin, LOW);
  }
}
