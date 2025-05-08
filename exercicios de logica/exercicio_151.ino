/*
Faça um programa que receba 4 notas de um aluno, calcule e imprima a média
aritmética das notas e a mensagem de APROVADO para média superior ou igual a
7,0 RECUPERAÇÃO para notas entre 5.0 e 7,0 ou a mensagem de REPROVADO
para média inferior a 5,0.
*/

// C++ code
//
float n1, n2, n3, n4, media;//cria as 5 variaveis de uma vez so e inicializa 
void setup()
{
Serial.begin(9600);
}

void loop()
{
 //entrada
  Serial.println("digite a primeira nota");
  while (!Serial.available());
  n1 = Serial.parseFloat();
    
  Serial.println("digite a segunda nota");
  while (!Serial.available());
  n2 = Serial.parseFloat();
    
  Serial.println("digite a terceira nota");
  while (!Serial.available());
  n3 = Serial.parseFloat();
  
  Serial.println("digite a quarta nota");
  while (!Serial.available());
  n4 = Serial.parseFloat();
  
  //processamento
    media = (n1 + n2 + n3 + n4 ) / 4;
  
  if(media >= 7) {
  Serial.println("aprovado");
  } else if(media >= 5) {
  Serial.println ("recuperacao");
 } else {
  Serial.println ("reprovado");
  }
  delay(5000);
  Serial.println();
}