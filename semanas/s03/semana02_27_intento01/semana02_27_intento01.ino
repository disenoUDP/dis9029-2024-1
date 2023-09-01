const char mensaje[] = "siempre_es_viernes_en_mi_corazon_";
int index = 0;
int repetirConteo = 10;
int recuentoActual = 0;

void setup()
{
  Serial.begin(9600); // put your setup code here, to run once:
}

void loop()
{
  if (recuentoActual < repetirConteo)
  {
    if (mensaje[index] != '\0')
    {
      Serial.println(mensaje[index]);
      index++;
      delay(1000);
    }
    else
    {
      index = 0;
      recuentoActual++;
      delay(2000);
    }
  } // put your main code here, to run repeatedly:
}
