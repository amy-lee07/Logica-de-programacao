// C++ code
// variaveis
int numero = 0;
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  while (numero <= 100) {
  Serial.println(numero); 
    numero += 2;
   delay(1000);
  }  
}