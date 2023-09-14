/**
 * Excelente trabajo utilizando las limitaciones
 * de la tarea generando un output de péndulo es una lógica
 * recurrente para utilizar todos los valores de iput y output
 *
 * Es importante realizar comentarios que ayuden a revisar
 * el código para reutilizar alguna de sus partes.
 */
int sam, estado;
void setup() {
// Start of the variable
sam = 5;
estado = 1;
Serial.begin(10000);
}

void loop() {
// Print en la consola
Serial.println(sam);

// Limite superior
if(sam == 30){
    estado = -1;
}

// Limite inferior
if(sam == 5){
    estado = 1;
}

// Operatoria de suma
sam = sam + estado*5;

delay(1000);
}