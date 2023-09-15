/**
  * "Un boton que itera por un menu"
  * dos secciones de código:
  *  primera sección lee y cambia valores de forma segura
  * segunda sección la estructura de los diferentes estados del menú
  */

const int buttonPin = 2; // Pin del botón
const int ledPin1 = 13;   // Primer LED
const int ledPin2 = 12;  // Segundo LED
const int ledpin3 = 10; // tercer LED
const int ledPin4 = 6; // cuarto LED


int ledState = 0;        // Estado actual de los LEDs
int lastButtonState = HIGH; // Último estado del botón
int buttonState;         // Estado actual del botón
int counter = 0;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledpin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // Leer el estado actual del botón
    int reading = digitalRead(buttonPin);
  Serial.print(counter);
  Serial.print(counter%6);
  Serial.println();
  
  // control de flujo para boton como contador
  if (reading != lastButtonState) {
    if (reading == HIGH) {
      counter++; // atajo para sumar 1 a una variable
    }
  }
  lastButtonState = reading; 
  delay(100); 
  
  // iterando por valores de counter 
  if(counter%6 == 0) { //suma valor e itinera
    digitalWrite(ledPin1, HIGH); // ledPin1 comienza encendida, mientras los otros permanecen apagados
    digitalWrite(ledPin2, LOW); //ledPin2 apagado
     digitalWrite(ledpin3, LOW); // ledpin3 apagado
     digitalWrite (ledPin4, LOW); // ledPin4 apagado
  
  } else if(counter%6 == 1) { //suma de valor e itinera
    digitalWrite(ledPin1, LOW); //ledPin1 apagado
    digitalWrite(ledPin2, HIGH); //ledPin2 se enciente, tras "presionar" el botón, mientras los otros ledpins permanecen apagados
     digitalWrite(ledpin3, LOW); //ledpin3 apagado
     digitalWrite(ledPin4, LOW);// ledPin4 apagado 
  

  } else if(counter%6 == 2){ // suma valor e itinera 
    digitalWrite(ledPin1, LOW); //ledPin1 apagado
    digitalWrite(ledPin2, LOW); //ledPin2 apagado
    digitalWrite(ledpin3, HIGH); // ledpin3 se enciende, tras presionar el botón, mientras los otros ledpins permaneces apagados 
    digitalWrite(ledPin4, LOW); // ledPin4 apagado

  } else if(counter%6 == 3){ // suma valir e itinera 
    digitalWrite(ledPin1, LOW); //ledPin1 apagado
    digitalWrite(ledPin2, LOW);// ledPin2 apagado 
    digitalWrite(ledpin3, LOW); // ledpin3 apagado
    digitalWrite(ledPin4, HIGH); // ledPin4 se enciende, tras presionar el botón, mientras los otros ledpins permaneces apagados 

 }else if(counter%6 == 4){ //suma valor e itinera, siendo programado para que todos los led pins se enciendan al mismo tiempo, tras presionar botón
    digitalWrite(ledPin1, HIGH); // ledPin1 encendido
    digitalWrite(ledPin2, HIGH); //ledPin2 encendido
    digitalWrite(ledpin3, HIGH);// ledpin3 encendido
    digitalWrite(ledPin4, HIGH);//ledPin4 encendido

 } else if(counter%6 == 5){//sumar valor e itinera, siendo programado para que todos los ledpins se apaguen, tras presionar el valor 
    digitalWrite(ledPin1, LOW); //ledPin1 apagado
    digitalWrite(ledPin2, LOW); //ledPin2 apagado
    digitalWrite(ledpin3, LOW); //ledpin3 apagado
    digitalWrite(ledPin4, LOW); //ledPin4 apagado
     delay(1000); // el contador espera 1 segundo, para luego prenderse todos los ledpins en loop
    digitalWrite(ledPin1, HIGH); //ledPin1 encendido
    digitalWrite(ledPin2, HIGH); //ledPin2 encendido
    digitalWrite(ledpin3, HIGH);//ledpin3 encendido
    digitalWrite(ledPin4, HIGH);//ledPin4 encendido 
  }

  }
  