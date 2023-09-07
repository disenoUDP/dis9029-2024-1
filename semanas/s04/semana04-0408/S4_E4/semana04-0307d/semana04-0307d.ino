/**
 * "Un boton que itera por un menu"
 * Dos secciones de código:
 *  primera sección lee y cambia valores de forma segura
 * segunda sección la estructura de los diferentes estados del menú
 */
const int buttonPin = 2; // Pin del botón
const int ledPin1 = 4;   // Primer LED
const int ledPin2 = 7;   // Segundo LED
const int ledPin3 = 5;   // Tercer LED

int ledState = 0;           // Estado actual de los LEDs
int lastButtonState = HIGH; // Último estado del botón
int buttonState;            // Estado actual del botón
int counter = 0;

void setup()
{
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  // Leer el estado actual del botón
  int reading = digitalRead(buttonPin);
  Serial.print(counter);
  Serial.print(counter % 8); // Mostrar el valor del contador módulo 8
  Serial.println();

  // Control de flujo para el botón como contador
  if (reading != lastButtonState)
  {
    if (reading == HIGH)
    {
      counter++; // Incrementar el contador en 1
      if (counter > 7)
      {
        counter = 0; // Reiniciar el contador cuando llega a 8
      }
    }
  }
  lastButtonState = reading;
  delay(100);

  // Iterar por valores de counter módulo 8
  if (counter % 8 == 0)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
  }
  else if (counter % 8 == 1)
  {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW);
  }
  else if (counter % 8 == 2)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW);
  }
  else if (counter % 8 == 3)
  {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, HIGH);
  }
  else if (counter % 8 == 4)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, HIGH);
  }
  else if (counter % 8 == 5)
  {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
  }
  else if (counter % 8 == 6)
  {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
  }
  else if (counter % 8 == 7)
  {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
  }
}
