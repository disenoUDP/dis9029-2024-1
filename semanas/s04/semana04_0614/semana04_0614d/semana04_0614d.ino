// agregar texto descriptivo del progrma
// agregar autores y fecha

const int buttonPin = 2; // Pin del botón
// explicar este tipo de variable
const int ledPins[] = {3, 4, 5, 6, 7}; // Pines de los LEDs
const int delays[] = {1000, 2000, 3000, 4000, 5000}; // Delays para cada LED

int buttonState = LOW; // Estado actual del botón
int lastButtonState = LOW; // Estado anterior del botón
unsigned long lastDebounceTime = 0; // Último tiempo de rebote del botón
unsigned long debounceDelay = 50; // Tiempo de debounce en milisegundos
int currentLed = 0; // Índice del LED actual

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Configura el pin del botón con resistencia pull-up interna
  // explicar esta estructura de control
  for (int i = 0; i < 5; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  int reading = digitalRead(buttonPin);
  // editar código sin usar
  if (reading != lastButtonState) {
    }
    
    {
    if (reading != buttonState) {
      buttonState = reading;
      if (buttonState == HIGH) {
        // Botón presionado, encender los LEDs con los delays especificados
        for (int inicial = 0; inicial<5; inicial++) {
          // el valor inicial es 0 (int inicial=0)
          // Solo funcionara si la variable inicial es menos a 5 (por los 5 leds, cuando llegua al 5to led inicial = 5 por siedno esto falso, por lo que se detiene el loop )
          // inicial++ se le va sumando 1 a la variable
          digitalWrite(ledPins[inicial], HIGH);
          delay(delays[inicial]);
          digitalWrite(ledPins[inicial], LOW);
        }
      }
    }
  }

  lastButtonState = reading;
}
