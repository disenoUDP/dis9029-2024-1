const int buttonPin = 2;  // constante Pin del botón
const int ledPin = 13;    // constnate Pin del LED
/*
* Una constante es una variable que no cambiará su valor
*/

int ledState = LOW;       // Estado actual del LED. Apagado
int buttonState = 0;      // Estado del botón, si está presionado o no
/*
* Estas no son constantes porque cambiarán su valor en función de lo que el código requiera
*/

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Botón = Entrada 
  pinMode(ledPin, OUTPUT);   // LED = Salida
}

void loop() {
  buttonState = digitalRead(buttonPin); // La variable del estado del botón será leida y transmitida a la del pin del botón, esta última no cambiará su valor

  if (buttonState == 0) { // == significa que mientras el estado del botón sea 0, la función if tendrá un valor TRUE. Si no lo es, será FALSE
      digitalWrite(ledPin, HIGH); // Si la variable es TRUE, el led se prende
  } else {
      digitalWrite(ledPin, LOW); // Si es FALSE, el led se mantendrá apagado
  }
}