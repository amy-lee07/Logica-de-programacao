/*
Faça um programa receba dois valores e imprima qual é o maior número
digitado.
*/
// C++ code
//
void setup()
{
  Serial.begin(9600);
}
 int numero1 = 0;
 int numero2 = 0;
void loop()
{
  Serial.println("Digite o primeiro");
  while (!Serial.available()) {}
  numero1 = Serial.parseInt();
  Serial.println("Digite o segundo");
  while (!Serial.available()) {}
  numero2 = Serial.parseInt();
  
  if( numero1 > numero2 ) {
  Serial.println( "O maior numero eh " + String(numero1));
  } 
  if( numero2 > numero1 ) {
  Serial.println( "O maior numero eh " + String(numero2));
  }
  if( numero1 == numero2 ) {
  Serial.println( "Os dois numeros sao iguais");
  }
  delay(5000);
}