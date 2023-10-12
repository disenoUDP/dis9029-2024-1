#include <Arduino.h>
/* Tecnologías Interactivas - semana 08 - comunicación serial arduino-processing
  Notas de Nicolás Troncoso
*/

void setup()
{
  Serial.begin(9600); // 1 Definir velocidad de comunicación
}

void loop()
{
  // enviar y terminar de enviar información
  Serial.print(" - ");
  Serial.println("Hola Mundo");
  Serial.flush();
}
/*
  previoValor = actualValor = 0;
  pinMode(buttonPin, INPUT_PULLUP);
// static unsigned long previousMillis = 0;
const unsigned long interval = 100; // Intervalo de 10 milisegundos

unsigned long currentMillis = millis();

if (currentMillis % interval == 0)
{
  // Serial.print(previousMillis);
}


const int buttonPin = 2; // Pin del botón
int buttonState = 0;     // Variable para almacenar el estado del botón
int lastButtonState = 0; // Variable para almacenar el estado previo del botón

int previoValor, actualValor;
// cada cierto tiempo verifico si hay cambios de entrada
// con más de uno ya es más eficiente
if (millis() % 2 == 0)
{
  buttonState = digitalRead(buttonPin); // veo el botón hacia arriba
  actualValor = analogRead(A5);         // leo el valor análogo
  // Serial.println(actualValor);
  // Serial.flush();
}

if (buttonState != lastButtonState)
{
  if (buttonState == HIGH)
  {
    Serial.println("A");
    // Serial.flush();
  }
  lastButtonState = buttonState;
}

if (previoValor != actualValor)
{
  Serial.println(actualValor);
  // Serial.flush();
  previoValor = actualValor;
}
*/
