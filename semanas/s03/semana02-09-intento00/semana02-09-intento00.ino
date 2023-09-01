// Sebastián Contreras
// Respuestas de prueba
  int respuesta1 = 0;
  int respuesta2 = 1;
  int respuesta3 = 2;
  int respuesta4 = 3;
// Botones
  const int botonRojo = 2; // Puerto del botón
  const int botonVerde = 3;
  const int botonAzul = 4;
  const int botonAmarillo = 5;
  int estadoRojo = 0;  // Variable para leer el estado del botón
  int estadoVerde = 0;
  int estadoAzul = 0;
  int estadoAmarillo = 0;
// Calorías
  // BEBIDAS
  int cafe = 5;
  int te = 2;
  int jugo = 118;
  int agua = 0;
  // COMIDAS
  int pan = 297;
  int avena = 114;
  int panqueques = 435;
  int huevos = 262;
// respuestaFinal
  int respuestaFinal1 = 0;
  int respuestaFinal2 = 0;
void setup() {
// Input de los botones
  pinMode(botonRojo, INPUT);
  pinMode(botonVerde, INPUT);
  pinMode(botonAzul, INPUT);
  pinMode(botonAmarillo, INPUT);
Serial.begin(9600);
}

void loop() {
// BOTON ROJO
    estadoRojo = digitalRead(botonRojo);
  // Ver si el botonRojo está presionado
  if (estadoRojo == HIGH) {
    // Respuesta
    Serial.println(respuesta1);
    delay(400); // Si no pongo esto el botón registra muchas respuestas
  }
// BOTON VERDE
  estadoVerde = digitalRead(botonVerde);
  // Ver si el botonVerde está presionado
  if (estadoVerde == HIGH) {
    // Respuesta
    Serial.println(respuesta2);
    delay(400); // Si no pongo esto el botón registra muchas respuestas
  }
// BOTON AZUL
  estadoAzul = digitalRead(botonAzul);
  // Ver si el botonRojo está presionado
  if (estadoAzul == HIGH) {
    // Respuesta
    Serial.println(respuesta3);
    delay(400); // Si no pongo esto el botón registra muchas respuestas
  }
// BOTON AMARILLO
  estadoAmarillo = digitalRead(botonAmarillo);
  // Ver si el botonRojo está presionado
  if (estadoAmarillo == HIGH) {
    // Respuesta
    Serial.println(respuesta4);
    delay(400); // Si no pongo esto el botón registra muchas respuestas
  }
// Pregunta 1: BEBIDA
  Serial.println("¿Que vas a beber en el desayuno de hoy?");
  Serial.println("1. te");
  Serial.println("2. cafe");
  Serial.println("3. jugo");
  Serial.println("4. agua");
  
  // Esperar a que el usuario presione un botón
  while (true) {
    if (digitalRead(botonRojo) == HIGH) {
      respuestaFinal1 += te;
      Serial.println("Has seleccionado un te");
      break;
    }
    if (digitalRead(botonVerde) == HIGH) {
      respuestaFinal1 += cafe;
      Serial.println("Has seleccionado un cafe");
      break;
    }
    if (digitalRead(botonAzul) == HIGH) {
      respuestaFinal1 += jugo;
      Serial.println("Has seleccionado un vaso de jugo");
      break;
    }
    if (digitalRead(botonAmarillo) == HIGH) {
      respuestaFinal1 += agua;
      Serial.println("Has seleccionado un vaso de agua");
      break;
    }
  }
  
  // Esperar un poco antes de la próxima pregunta
  delay(1000);
// Pregunta 1: COMIDA
  Serial.println("¿Que vas a comer en el desayuno de hoy?");
  Serial.println("1. Pan con mantequilla");
  Serial.println("2. Avena");
  Serial.println("3. Panqueques");
  Serial.println("4. Huevos con tocino");
  
  // Esperar a que el usuario presione un botón
  while (true) {
    if (digitalRead(botonRojo) == HIGH) {
      respuestaFinal2 += pan;
      Serial.println("Has seleccionado un pan con mantequilla");
      break;
    }
    if (digitalRead(botonVerde) == HIGH) {
      respuestaFinal2 += avena;
      Serial.println("Has seleccionado un plato de avena");
      break;
    }
    if (digitalRead(botonAzul) == HIGH) {
      respuestaFinal2 += panqueques;
      Serial.println("Has seleccionado tres panqueques");
      break;
    }
    if (digitalRead(botonAmarillo) == HIGH) {
      respuestaFinal2 += huevos;
      Serial.println("Has seleccionado huevos con tocino");
      break;
    }
  }
  
  // Esperar un poco antes de la próxima pregunta
  delay(1000);
// Total de calorías
   Serial.print("Total de calorías a consumir: ");
  Serial.println(respuestaFinal1 + respuestaFinal2);
  Serial.println("Provecho! :3");
  delay(10000); // no supe como hacer un loop para reiniciar
}
