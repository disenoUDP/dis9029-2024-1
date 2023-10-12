/* Tecnologías Interactivas - semana 08 - comunicación serial arduino-processing
  Notas de Nicolás Troncoso 
*/

import processing.serial.*; // 1 Importar la libreria serial

Serial port;                // 2 Declarar variable port de tipo Serial

void setup() {
  size(400, 400);
  // conectar la variable con los datos de emisor
  // recibe tres argumentos: this, la dirección del puerto USB, la velocidad
  port = new Serial(this, "/dev/cu.usbserial-2220", 9600); 
  
}

// void draw cumple la función de void loop
void draw() {
}

// Escuchar los eventos en el puerto 
void serialEvent(Serial port) {
  // Leer la información en una variable temporal
  String mensaje = port.readStringUntil('\n');  
  
  if (mensaje != null) {                  // si el mensaje no es vacío entonces
    println(mensaje);                     // Imprime en la consola de Processing
  }

}
/**
color bgColor = color(100); // Inicializa el color de fondo
  background(bgColor); // Establece el color de fondo con el argumento bgColor
    // }
    // if(mensaje == 0) {

    // Cambia el color de fondo a un color aleatorio cuando se recibe el mensaje
    // bgColor = color(random(255), random(255), random(255));

 */