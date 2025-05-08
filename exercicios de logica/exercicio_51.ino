// C++ code
//Faça um programa que receba a medida em centímetros e exiba esse
//número em polegadas. OBS: Uma polegada equivale a 2.54
//centímetros.

float centimetros = 0;
float polegadas = 0;


void setup()
{
 Serial.begin(9600);
  
}

void loop()
{
   //cabeçalho - 2 pipes + tracinhos
  Serial.println("|---------------|");
  Serial.println("|               |");              
  Serial.println("|  lopal-ex_05  |");
  Serial.println("|               |");
  Serial.println("|---------------|");
  
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
  
 //entrada
 Serial.println ("digite a medida em centimetros");
 while (! Serial.available() ){}
 centimetros = Serial.parseFloat();
  
 //processamento
 polegadas = centimetros * 2.54;
  
 //saida
 Serial.println("sua medida em polegadas: " + String(polegadas) );
 delay(10000);   
}