/**
  * "Un boton que deja encendido o apagado"
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

const int buttonPin = 2;  // Pin del botón
const int ledPin = 12;    // Pin del LED

int buttonState = 0;      // Variable para almacenar el estado del botón
int lastButtonState = 0;  // Variable para almacenar el último estado del botón
int ledState = LOW;       // Estado actual del LED

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Configurar el pin del botón como entrada
  pinMode(ledPin, OUTPUT);   // Configurar el pin del LED como salida

  Serial.begin(9600);       // NECESITO SABER
}

void loop() {
  // Leer el estado actual del botón
  buttonState = digitalRead(buttonPin);

  // NECESITAS SABER LA NATURALEZA DE ENTRADA
  Serial.println(buttonState);

  // Comprobar si el estado del botón ha cambiado
  // 
  if (buttonState != lastButtonState) {
    if (buttonState == LOW) {
      // Cambiar el estado del LED cuando el botón es presionado
      ledState = !ledState;
      digitalWrite(ledPin, ledState);
    }
    delay(50);  // Pequeña pausa para evitar rebotes del botón
  }

  // Actualizar el último estado del botón
  lastButtonState = buttonState;
  
}
