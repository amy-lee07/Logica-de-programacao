/*
Faça um programa que receba um número inteiro do usuário e informe se este
número é positivo ou negativo.
*/

// C++ code
//variaveis
int numero = 0;
void setup()
{
 Serial.begin(9600);
}

void loop()
{
 Serial.println("digite um numero");
  while(! Serial.available());
  numero = Serial.parseInt();
  
  if(numero > 0){
  Serial.println("numero e positivo");
    
  } else {
   Serial.println("numero e negativo"); 
    
  }
  delay(9600)
}