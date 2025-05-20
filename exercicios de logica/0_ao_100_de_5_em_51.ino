// C++ code
// variaveis
int numero = 0;
void setup()
{
 Serial.begin(9600);
}

void loop()
{
   while(numero <= 50) {
   Serial.println ( numero);
   numero += 5;
   delay (1000);
     
   }
}