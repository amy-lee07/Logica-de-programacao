// Faça um programa que receba o ano de nascimento
// de uma pessoa e o ano atual. Calcule e imprima:
// a. A idade dessa pessoa
// b. Essa idade convertida em semanas

int anoNascimento = 0;
int anoAtual = 0;
int idade = 0;
int idadeSemanas = 0;

void setup() {
  Serial.begin(9600); 

}

void loop()
{
  //cabeçalho - 2 pipes + tracinhos
  Serial.println("|---------------|");
  Serial.println("|               |");              
  Serial.println("|  lopal-ex_02  |");
  Serial.println("|               |");
  Serial.println("|---------------|");
  
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
  
  
  
  // Entrada: ano de nascimento
  Serial.println("Digite o ano de nascimento:");
  while (!Serial.available()) {}
  anoNascimento = Serial.parseInt();
  
  //Ano Atual
  Serial.println("Digite o ano Atual:");
  while (!Serial.available()) {}
  anoAtual = Serial.parseInt();
 
  // Processamento
  idade = anoAtual - anoNascimento;
  idadeSemanas = idade * 52;
  // Saída
  Serial.println( "seu ano de nascimento:" + String (anoNascimento) );
  Serial.println( "seu ano atual:" + String (anoAtual) );
  Serial.println( "sua idade:" + String (idade) );
  Serial.println( "idade em semanas:" + String (idadeSemanas) );
  
} 