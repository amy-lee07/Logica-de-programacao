/*
Elabore um programa para cálculo de preços de produtos que solicite o preço
de compra do produto e o percentual a ser aplicado em cima desse valor para
a venda. Calcule e exiba o preço de venda do produto. Se o percentual a ser
aplicado for inferior a 50%, exiba uma mensagem informando ao usuário que o
produto será vendido com uma margem muito pequena de lucro.
*/
//variaveis
float preco; 
float percentual;
float precoDeVenda;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
 Serial.println("Digite o preco");
 while(! Serial.available());
 preco = Serial.parseFloat(); //aguarde a resposta do usuario
  
 Serial.println("Digite o percentual em decimal");
 while(! Serial.available());
 percentual = Serial.parseFloat(); //aguarde a resposta do usuario
  
 Serial.println("preco e: " + String (preco));
  
 Serial.println("percentual e: " + String (percentual));
 
  
  if (percentual > 1.5){
  precoDeVenda = preco * percentual;   
  Serial.println("valor de venda e: " + String (precoDeVenda));
   
  } else {
   Serial.println(" o percentual e menor que 50%, tera um lucro pequeno");
 
  } 
  Serial.println();
  Serial.println("---------------------");

  
  delay(1000);
  
}