/**
 * El primer intento cumple con lo necesario del ejercicio
 * Ademas de contenido de siguientes semanas como las condicionales
 * Si bien no se pidió, están bien utilizadas.
 * Se recomienda:
 * utilizar control+T para indentar el texto
 * escribir comentarios de línea o bloque del código que se escribe
 *
 *
 */
int dia, semana;
void setup()
{
  // put your setup code here, to run once:
  dia = 0;
  semana = 1;
  Serial.begin(9600);
}

void loop()
{
  // put your main code here, to run repeatedly:
  dia = dia + 1;
  Serial.print("dia:");
  Serial.println(dia);
  delay(1000);

  if (dia == 7)
  {
    Serial.print("semana:");
    Serial.println(semana);
    dia = 0;
    semana = semana + 1;
  }
}