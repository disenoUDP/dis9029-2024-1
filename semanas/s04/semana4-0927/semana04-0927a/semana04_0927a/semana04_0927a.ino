/* Sebastián Contreras 09 - Consuelo Villagrán 27
* "Un botón que cambia entre distintos efectos de luces"
* En base a los ejemplos vistos en clases se agregaron más LEDs y más variables al contador
* Para crear los distintos "efectos" de las luces investigamos las funciones "switch" y "case" para reemplazar los "if" "else if" utilizados en el ejemplo visto en clases
* El motivo de esta decisión fue para tener un código más compacto y con la intención de posteriormente agregar efectos más complejos al programa (como luces de navidad)
* Además, para ordenar y comprimir más el código, se utilizaron funciones "void" extras. Esto nos ayudó a mejorar el tiempo de respuesta del botón (que aún necesita refinamiento).
* En resumen, este ejercicio corresponde a una combinación de los ejercicios 2 y 3 vistos en clases
*/
const int buttonPin = 2;   // Pin del boton
const int ledPin1 = 13;    // Primer LED
const int ledPin2 = 12;    // Segundo LED
const int ledPin3 = 11;    // Tercer LED
const int ledPin4 = 10;    // Cuarto LED
const int ledPin5 = 9;     // Quinto LED
const int ledPin6 = 8;     // Sexto LED

int ledState = 0;                                   // Estado actual de los LEDs
int lastButtonState = HIGH;                         // Ultimo estado del boton
int buttonState;                                    // Estado actual del boton
int counter = 0;
void setup() {
  pinMode(buttonPin, INPUT_PULLUP);     //Entrada
  pinMode(ledPin1, OUTPUT);             //Salida
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int reading = digitalRead(buttonPin);       //Leer si el botón ha sido presionado
  Serial.print(counter);                      //Mostrar el estado actual del contador
  Serial.print(counter % 6);
  Serial.println();

/*
* Si Reading (equivalente a la lectura de la variable buttonPin) es distinto al último estado del botón (HIGH), el valor de la operación es TRUE
* Si Reading tiene el valor HIGH, se agrega 1 al contador
* Esto nos permite sumar 1 al contador cada vez que se detecte que el botón ha sido presionado
*/
  if (reading != lastButtonState) {
    if (reading == HIGH) {
      counter++;        // Sumar 1 al contador
    }
  }
  lastButtonState = reading;

  /*
  * Cambiar el efecto de luces segun el estado actual
  * Cada case se compone de dos efectos en un bucle
  * Hacer esto con las funciones "if" y "else if" nos podría llevar al mismo resultado,
  * pero en nuestros intentos el programa terminaba con una cantidad excesiva de líneas de código y un tiempo de respuesta muy malo en el botón
  *(demorándose hasta más de un segundo en registrar la respuesta)
  */h
    switch (counter % 6) {
      case 0:
        patronLuces1();
        delay(200);
        patronLuces4();
        break;
      case 1:
        patronLuces2();
        delay(200);
        patronLuces5();
        break;
      case 2:
        patronLuces3();
        delay(200);
        patronLuces6();
        break;
      case 3:
        patronLuces4();
        delay(200);
        patronLuces2();
        break;
      case 4:
        patronLuces5();
        delay(200);
        patronLuces1();
        break;
      case 5:
        patronLuces6();
        delay(200);
        patronLuces4();
        break;
    }
  }

// Funcion para apagar todos los LEDs
void apagarLEDs() {
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW);
}

// Funciones para patrones de luces
void patronLuces1() {
  apagarLEDs();
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin4, HIGH);
}

void patronLuces2() {
  apagarLEDs();
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin5, HIGH);
}

void patronLuces3() {
  apagarLEDs();
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin6, HIGH);
}

void patronLuces4() {
  apagarLEDs();
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
}

void patronLuces5() {
  apagarLEDs();
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, HIGH);
}

void patronLuces6() {
  apagarLEDs();
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin5, HIGH);
}
