/**
 * Excelente trabajo utilizando las limitaciones
 * de la tarea generando un output gráfico con intención
 *
 * Es importante realizar comentarios que ayuden a revisar
 * el código para reutilizar alguna de sus partes.
 */
int inicio = 0;
char espacio = ' ';
void setup() {
  // put your setup code here, to run once:
  //inicio = inicio + espacio;

  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(espacio);
  Serial.print(inicio);
  Serial.println(inicio);
  delay(1000);
  Serial.print(inicio);
  Serial.print(espacio);
  Serial.println(inicio);
  delay(1000);
  Serial.print(inicio); 
  Serial.print(inicio);
  Serial.println(espacio);
  delay(1000);
  Serial.print(espacio);
  Serial.print(inicio);
  Serial.print(inicio);
  Serial.println(inicio);
  delay(1000);
  Serial.print(inicio);
  Serial.print(espacio);
  Serial.print(inicio);
  Serial.println(inicio);
  delay(1000);
  Serial.print(inicio);
  Serial.print(inicio);
  Serial.print(espacio);
  Serial.println(inicio);
  delay(1000);
  Serial.print(inicio);
  Serial.print(inicio);
  Serial.print(inicio); 
  Serial.println(espacio);
  delay(1000);
  Serial.print(espacio);
  Serial.print(inicio);
  Serial.print(inicio);
  Serial.print(inicio);
  Serial.println(inicio);
  delay(1000);
  Serial.print(inicio);
  Serial.print(espacio);
  Serial.print(inicio);
  Serial.print(inicio);
  Serial.println(inicio);
  delay(1000);
  Serial.print(inicio);
  Serial.print(inicio);
  Serial.print(espacio);
  Serial.print(inicio);
  Serial.println(inicio);
  delay(1000);
}
