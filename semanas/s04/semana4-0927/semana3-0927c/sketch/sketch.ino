/**
  * "Un boton que itera por un menu"
  * Dos secciones de código:
  *  primera sección lee y cambia valores de forma segura
  * segunda sección la estructura de los diferentes estados del menú
  */

const int buttonPin = 3; // Pin del botón
const int ledPin1 = 13;   // Primer LED
const int ledPin2 = 12;  // Segundo LED

int ledState = 0;        // Estado actual de los LEDs
int lastButtonState = HIGH; // Último estado del botón
int buttonState;         // Estado actual del botón
int counter = 0; // Valor de base asignado al contador

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Botón = Entrada
  pinMode(ledPin1, OUTPUT); // LED1 = Salida
  pinMode(ledPin2, OUTPUT); // LED2 = Salida

  Serial.begin(9600); // función para comunicarse con el monitor de arduino, 9600 corresponde a la tasa de bits por segundo
}

void loop() {
  // Leer el estado actual del botón
  int reading = digitalRead(buttonPin); // La variable reading de ahora en adelante significará la lectura del buttonPin
  Serial.print(counter); // Mostrar el valor actual del contador
  Serial.print(counter%3); // Se le asigna el módulo 3 al contador y es mostrado en el terminal/monitor
  Serial.println(); // Según yo esto no hace nada, el código funciona de la misma manera sin él. CORRECCIÓN: La variable printIn equivale a un quiebre de línea, esto facilita la lectura del código en el terminal
  
  // control de flujo para boton como contador
  if (reading != lastButtonState) { // != NO es igual a. Compara la variable izquierda con la derecha, la operación es TRUE cuando los valores NO son iguales, en caso de serlo, es FALSE
    if (reading == HIGH) { // == significa que mientras el estado del botón sea 0, la función if tendrá un valor TRUE. Si no lo es, será FALSE
      counter++; // atajo para sumar 1 a una variable del contador
    }
  }
  lastButtonState = reading; // El último estado del botón es igual a la variable reading
  delay(100); // Retraso para mantener el flujo sin rebotes
  
  // iterando por valores de counter modulo 3
  if(counter%3 == 0) { // == significa que mientras el estado del botón sea 0, la función if tendrá un valor TRUE. Si no lo es, será FALSE
    digitalWrite(ledPin1, HIGH); //Se prende uno y se apaga el otro
    digitalWrite(ledPin2, LOW);
  
  } else if(counter%3 == 1) { // == significa que mientras el estado del botón sea 0, la función if tendrá un valor TRUE. Si no lo es, será FALSE
    digitalWrite(ledPin1, LOW); //Lo mismo
    digitalWrite(ledPin2, HIGH);

  } else if(counter%3 == 2){ // == significa que mientras el estado del botón sea 0, la función if tendrá un valor TRUE. Si no lo es, será FALSE
    digitalWrite(ledPin1, LOW); //Se prenden ambos
    digitalWrite(ledPin2, LOW);
  }
}