int contador, tres, cinco, diez; //variables
void setup() {
  // put your setup code here, to run once:
  contador = 1;
  tres = 1;
  cinco = 1;
  diez = 1;
  Serial.begin(9600);
  Serial.println(contador);
  //Serial.print(contador); //mostrar valor en la consola
}

void loop() {
  // modificar informacion
  contador = contador + 1; //sumar el contador + 1 
  //si no se le suma el contador solo llega hasta 1 3 y 5
  tres = contador * 3; //multiplica el contador por 3
  cinco = contador * 5; //multiplica el contador por 5
  diez = contador * 10; // multiplica el contador por 10

  /**
   * Esta excelente la tarea:
   * Tiene una estructura que describe el uso de todo el contenido entregado.
   * Con esta estructura será más fácil en el futuro ir escribiendo progrmas
   * mas complejos. Por mejorar se puede redactar en bloque de código.
   *
   * Bien hecho.
   *
   */
  // lo de abajo define el orden del loop
  // vale más que lo de arriba sin que salga serial.println no se muestra en la consola
  // lo de arriba es como una declaración, si pongo 5, se entiende que estoy multiplicando el contador por 5
  // si el contador ya tiene un número definido, esa puede ser mi única variable


  Serial.println(contador);
  delay(1000);
  Serial.println("¿Cuál es la tabla de esté número?");
  delay(2000);
  Serial.println("comienza multiplicandolo por 2, luego por tres y así hasta llegar a multiplocralo por 10");
  delay(4000); //esperar 1 segundo
  Serial.println("Listo... en");
  delay(3000);
  Serial.println("3");
  delay(1000);
  Serial.println("2");
  delay(1000);
  Serial.println("1");
  delay(1000);
  Serial.println(contador * 2);
  delay(1000); //esperar 1 segundo
  Serial.println(tres);
  delay(1000); //esperar 1 segundo
  Serial.println(contador * 4);
  delay(1000); //esperar 1 segundo
  Serial.println(cinco);
  delay(1000); //esperar 1 segundo
  Serial.println(contador * 6);
  delay(1000); //esperar 1 segundo
  Serial.println(contador * 7);
  delay(1000); //esperar 1 segundo
  Serial.println(contador * 8);
  delay(1000); //esperar 1 segundo
  Serial.println(contador * 9);
  delay(1000); //esperar 1 segundo
  Serial.println(diez);
  delay(1000); //esperar 1 segundo
  Serial.println("-------"); // Lo puse para saber donde empieza y donde termina el loop
  delay(1000); //esperar 1 segundo

  // si pondo el delay(1000) al final, se da a entender que todo el loop se hará en ese determinado tiempo.

}
