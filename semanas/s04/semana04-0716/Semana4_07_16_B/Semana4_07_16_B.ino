//Nicolas_Carrasco_07_Tamara_Lincopan_16_01/09/23
//boton en el pin 2, primer proceso semaforo, segundo proceso intermitencia led2, tercer proceso intermitencia led3. Proceso cambia al mantener el boton abajo
const int buttonPin = 2; // Pin del botón
const int ledPin1 = 13;   // Primer LED
const int ledPin2 = 12;  // Segundo LED
const int ledPin3 = 11; // tercer LED

int estadoLed = 0;        // Estado actual de los LEDs
int lastButtonState = HIGH; // Último estado del botón
int estadoboton;         // Estado actual del botón
int counter = 0;

void setup(){
  pinMode(buttonPin, INPUT_PULLUP); //declarar entrada
  pinMode(ledPin1, OUTPUT); //declarar salida
  pinMode(ledPin2, OUTPUT); //declarar salida
  pinMode(ledPin3, OUTPUT); //declarar salida
  Serial.print(counter%3); //lectura diferencia
  Serial.begin(9600);
}

void loop(){
 // Leer el estado actual del botón
  int reading = digitalRead(buttonPin);

// control de flujo para boton como contador
  if (reading != lastButtonState) { //comparacion estado boton y utimo estado boton
    if (reading == LOW) { //mantener boton abajo
      counter++; // atajo para sumar 1 a una variable
    }
  }
    lastButtonState = reading; // ultimo estado igual a lectura
  delay(500);
  // iterando por valores de counter modulo 3
  if(counter%3 == 0) {
    digitalWrite(ledPin3, LOW); //led3 off
    digitalWrite(ledPin1, HIGH);//led1 on
    delay(1000);
    digitalWrite(ledPin1, LOW);//led1 off
    delay(1000);
    digitalWrite(ledPin2, HIGH);//led2 on
    delay(1000);
    digitalWrite(ledPin2, LOW);//led2 off
    delay(1000);
    digitalWrite(ledPin3, HIGH);//led3 on
    delay(1000);
    digitalWrite(ledPin3, LOW);//led3 off
    delay(1000);
  
  } else if(counter%3 == 1) { // siguiente estado al precionar boton
    digitalWrite(ledPin1, LOW); //led1 off
    digitalWrite(ledPin2, HIGH);//led2 on
    delay(200);
    digitalWrite(ledPin2, LOW);//led2 off
    delay(200);
    digitalWrite(ledPin3, LOW);//led3 off

  } else if(counter%3 == 2){ //siguiente estado al precionar boton
    digitalWrite(ledPin1, LOW);//led1 off
    digitalWrite(ledPin2, LOW);//led2 off
    digitalWrite(ledPin3, HIGH);//led3 on
    delay(200);
    digitalWrite(ledPin3, LOW);//led3 off
    delay(200);
  }
}