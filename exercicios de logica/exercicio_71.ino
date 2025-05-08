// C++ code
//Faça um programa que receba o nome, cargo e salário de um funcionário. Calcule o
//salário acrescido de 10%. Ao final exiba o nome, o cargo e o novo salário desse
//funcionário.

String nome = "";
String cargo = "";
float salario = 0; novoSalario
void setup()
{
  Serial.begin (9600);
}

void loop()
{
 //entrada
  Serial.println("qual e o nome do funcionario");
  while (! Serial.available() );
  nome = Serial.readString();
  
  Serial.println("qual e o cargo de" + nome);
  while (! Serial.available() );
  cargo = Serial.readString();
  
  Serial.println("qual o salario de" + nome);
  while (! Serial.available();
  Salario = Serial. parseFloat();
         
  
 // processamento
   novoSalario = * 1.10;       
  
 //saida
  Serial.println("nome: " + nome);
  Serial.println(" cargo: " + cargo);
  Serial.println("salario antigo: " + String(salario));
  Serial.println("salario atualizado: " + String(novoSalrio));       
         
         
}