// C++ code
// variaveis
int numero = 1;
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  while (numero <= 99) {
  Serial.println(numero); 
    numero += 2 ;
   delay(1000);
  }  
}