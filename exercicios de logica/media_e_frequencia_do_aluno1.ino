// C++ code
//Você foi contratado para criar um sistema que analisa a situação de um aluno com base em suas notas e frequência.
float nota1, nota2, frequencia, media  
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  //entrada
 Serial.println("digite a primeira nota");
  while (!Serial.available());
  nota1 = Serial.parseFloat();
  
  Serial.println("digite a segunda nota");
  while (!Serial.available());
  nota2 = Serial.parseFloat();
  
  Serial.println("digite sua frequencia"); //vi no codigo pois nao lembrava
  
  //processamento
  media = 
  
  if(media >= 6) {
  Serial.println("aprovado");
  } else if(media >= 6) { //vi no codigo pois nao lembrava
  Serial.println ("recuperacao");
 } else {
  Serial.println ("reprovado");
  }
  
  
}