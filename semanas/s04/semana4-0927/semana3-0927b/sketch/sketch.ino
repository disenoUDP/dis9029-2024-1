const int buttonPin = 3;  // Pin del botón
const int ledPin = 13;    // Pin del LED
/*
* Una constante es una variable que no cambiará su valor
*/

int buttonState = 0;      // Estado actual del botón
int lastButtonState = 0;  // Último estado del botón para que el programa registre si fue presionado o no
int ledState = LOW;       // Estado actual del LED. Apagado
/*
* Estas no son constantes porque cambiarán su valor en función de lo que el código requiera
*/

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Botón = Entrada
  pinMode(ledPin, OUTPUT);   // LED = Salida
  Serial.begin(9600);       // función para comunicarse con el monitor de arduino, 9600 corresponde a la tasa de bits por segundo
}

void loop() {
  buttonState = digitalRead(buttonPin); // La variable del estado del botón será leida y transmitida a la del pin del botón, esta última no cambiará su valor
  Serial.println(buttonState); // Mostrar el estado del botón en el terminal para verificar que todo esté funcionando correctamente
  if (buttonState != lastButtonState) { // != NO es igual a. Compara la variable izquierda con la derecha, la operación es TRUE cuando los valores NO son iguales, en caso de serlo, es FALSE
    if (buttonState == LOW) { // == significa que mientras el estado del botón sea 0, la función if tendrá un valor TRUE. Si no lo es, será FALSE
      // Cambiar el estado del LED cuando el botón es presionado
      ledState = !ledState; // = ! Lo mismo que !=
      digitalWrite(ledPin, ledState); // Leer el pin 13 y el estado actual del LED
    }
    delay(50);  // Pequeña pausa para evitar rebotes del botón
  }
lastButtonState = buttonState; // Actualizar el último estado del botón
}