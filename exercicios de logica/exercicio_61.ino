// C++ code
//Faça um programa que receba a medida em polegadas e exiba esse número em
//centímetros.
 float polegadas = 0;
 float centimetros = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
   //cabeçalho - 2 pipes + tracinhos
  Serial.println("|---------------|");
  Serial.println("|               |");              
  Serial.println("|  lopal-ex_06  |");
  Serial.println("|               |");
  Serial.println("|---------------|");
  
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
  
   // Entrada
  Serial.println("Digite a medida em polegadas:");
  while (!Serial.available()) {}//Aguarda o usuário digitar
  polegadas = Serial.parseFloat();//Lê a medida em polegadas
  delay(500);//Pequeno delay para garantir leitura

  // Processamento
  centimetros = polegadas * 2.54;//Converte polegadas para centímetros

  // Saída
  Serial.print(polegadas);
  Serial.print(" polegadas equivale a ");
  Serial.print(centimetros, 2);//Exibe o resultado com 2 casas decimais
  Serial.println(" centimetros.");

  
}