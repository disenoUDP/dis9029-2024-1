// Evaluación número 01, semana 04
// Francisca Bustamante (06)
// Nicolás Jara (14)
// El objetivo que nos planteamos fue realizar un semáforo que al presionar el botón los leds se prendan en el siguiente orden: rojo, amarillo, verde, amarillo
// Una vez terminado se debe presionar denuevo el botón.
// Le colocamos un delay (tiempo encendido del led en este caso) de 2 segundos en el caso del led amarillo y 5 segundos en el caso de los leds verde y rojo

int buttonPin = 7; // Pin del botón (ubicado en el 7)
int redLED = 2;   // Pin del LED rojo (ubicado en el 2)
int yellowLED = 3; // Pin del LED amarillo (ubicado en el 3)
int greenLED = 4;  // Pin del LED verde (ubicado en el 4)

// al hablar de ubicación nos referimos a el pin dentro de la placa de arduino
// anteriormente declaramos la ubicación de los pines para lograr su funcionamiento

void setup() {
  pinMode(redLED, OUTPUT); // leds como salidas
  pinMode(yellowLED, OUTPUT); // idem
  pinMode(greenLED, OUTPUT); // idem

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
