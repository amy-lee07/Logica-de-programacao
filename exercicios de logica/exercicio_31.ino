// C++ code
// Programa que recebe um número e exibe o seu dobro

int numero = 0;
int dobro = 0;

void setup()
{ 
  Serial.begin(9600);           
            
}

void loop()
{
   //cabeçalho - 2 pipes + tracinhos
  Serial.println("|---------------|");
  Serial.println("|               |");              
  Serial.println("|  lopal-ex_03  |");
  Serial.println("|               |");
  Serial.println("|---------------|");
  
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
  
  
  // Entrada
  Serial.println("Digite um número:");
  while (!Serial.available()) {}// Espera o usuário digitar
  numero = Serial.parseInt(); // Lê o número
  while (Serial.available()) { Serial.read(); } 

  // Processamento
  dobro = numero * 2;

  // Saída
  Serial.print("O dobro de ");
  Serial.print(numero);
  Serial.print(" é ");
  Serial.println(dobro);

 
}
