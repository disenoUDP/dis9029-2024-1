const int botonPin = 2;          // Pin del botón conectado
const int ledPin = 13;  // Pin del LED integrado en la placa

void setup() {
  pinMode(botonPin, INPUT_PULLUP);  // Configura el pin del botón como entrada con resistencia pull-up interna
  pinMode(ledPin, OUTPUT);          // Configura el pin del LED como salida

  Serial.begin(9600);               // Abrir la consola
}

void loop() {
  int estadoBoton = digitalRead(botonPin);  // Lee el estado del botón

  if (estadoBoton == LOW) {                 // Si el botón está presionado
    digitalWrite(ledPin, HIGH);            // Enciende el LED

    Serial.print("estadoBoton: ");        // Mostrar valores e la consola del boton y el pin del led 13
    Serial.println(estadoBoton);
    Serial.print("ledPin: ");
    Serial.println(ledPin);
  } else {                                  // Si el botón no está presionado
    digitalWrite(ledPin, LOW);             // Apaga el LED
  }
}

/*
  ejercicio 1 :
  invertir el comportamiento del sketch

  ejercicio 2 :
  dejar led encendido al soltar el boton, y apagar el led al soltar nuevamente

  ejercicio 2 :
  usar una variable como contador en conjunto con el operador módulo para pasar por tres estados
  if, if else, else
*/