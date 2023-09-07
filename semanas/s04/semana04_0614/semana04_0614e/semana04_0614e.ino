// agregar texto descriptivo del progrma
// agregar autores y fecha

int buttonPin = 7; // Pin del botón
int redLED = 2;   // Pin del LED rojo
int yellowLED = 3; // Pin del LED amarillo
int greenLED = 4;  // Pin del LED verde

void setup() {
  // Configura los pines de los LEDs como salidas
  pinMode(redLED, OUTPUT); // leds como salidas
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);

  pinMode(buttonPin, INPUT_PULLUP); // entrada
}

// HIGH presionado, LOW no presionado el botón

void loop() {
  if (digitalRead(buttonPin) == LOW) { 

    digitalWrite(redLED, HIGH); // Luz roja encendida, las demás apagadas
    digitalWrite(yellowLED, LOW);
    digitalWrite(greenLED, LOW);
    delay(5000); // Espera 5 segundos

    digitalWrite(redLED, LOW);
    digitalWrite(yellowLED, HIGH);  // Luz amarilla encendida, las demás apagadas
    digitalWrite(greenLED, LOW);
    delay(2000); // Espera 2 segundos

    digitalWrite(redLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(greenLED, HIGH); // Luz verde encendida, las demás apagadas
    delay(5000); // Espera 5 segundos

    // Luz amarilla encendida, las demás apagadas
    digitalWrite(redLED, LOW);
    digitalWrite(yellowLED, HIGH); // Luz amarilla encendida, las demás apagadas
    digitalWrite(greenLED, LOW);
    delay(2000); // Espera 2 segundos
  } else {
    // Si el botón no se presiona, todos los LEDs apagados
    digitalWrite(redLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(greenLED, LOW);
  }
}
