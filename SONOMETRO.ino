
/* SONOMETRO DE 10 LED's*/

/* LISTA DE MATERIALES:

- PLACA ARDUINO UNO
- 10 LED's VERDES AMARILLOS Y ROJOS
- MICROFONO FC-04, SE PUEDE ADQUIRIR EN CUALQUIER TIENDA VIRTUAL TIPO BANGGOOD, ALIEXPRESS, ETC  */

int led[10] = { 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; // Asignamos los pines a los leds

const int leftChannel = A0; // Asignamos la entrada analógica A0 a la que conectaremos el microfono
int left, i;

void setup()
{
for (i = 0; i < 10; i++)
  pinMode(led[i], OUTPUT);
Serial.begin(9600); 
}

void loop()
{
left = analogRead(leftChannel);

Serial.println(left);

left = left / 110;

  if (left == 0)  
   {
   for(i = 0; i < 10; i++)
     {
     digitalWrite(led[i], LOW);
     
     }
  }
  
  else
  {
   for (i = 0; i < left; i++) 
    {
     digitalWrite(led[i], HIGH);
     delay(100);
     
    }
    
    for(i = i; i < 10; i++)  
     {
      digitalWrite(led[i], LOW);
       //delay(100);
     }
  }
}
