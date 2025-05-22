// C++ code
//
int ledVerde = 1;
int ledVermelho = 9;
int ledAzul = 5;
int numeroSorteado = 0;
#include <Servo.h>
Servo motor;
void desenhaCabecalho(){
  Serial.println("|-------------------------------|");
  Serial.println("|                               |");
  Serial.println(" --- PROGRAMA JOGO DE DADOS --- ");
  Serial.println("|                               |");
  Serial.println("|-------------------------------|");
}
void setup()
{
 Serial.begin(9600);
  pinMode(ledAzul, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  
  motor.write(0);
     delay(1500);
     motor.write(90);
     delay(1500);
     motor.write(180);
     delay(1500);
     motor.write(90);
     delay(1500);

}

void loop()
{
 desenhaCabecalho;
 Serial.println("digite um palpite entre 1 e 6:");
 while(!Serial.available());
 int palpite = Serial.parseInt();
 int numeroSorteado = random(1, 7);
 Serial.println("Seu palpite: " + String(palpite));
 Serial.println("numero sorteado: " + String(numeroSorteado));
  if(palpite == numeroSorteado)
  {
  Serial.println("parabens, voce acertou");
  }else{
  Serial.println("que pena, tente outra vez");
  }
  Serial.println("reiniciando o programa");
  Serial.println();
  delay(700);
  
  
 
  while(!Serial.available());
  palpite = Serial.parseInt(); 
 
  
   if(numeroSorteado == palpite) 
   {
    digitalWrite(ledVerde, HIGH); 
     delay(500);
     digitalWrite(ledVerde, LOW);
     Serial.println(" numero sorteado");
     digitalWrite(ledAzul, HIGH);
     delay(500);
   digitalWrite(ledAzul, LOW);
     
  
    
     
 } else {  
   digitalWrite(ledVermelho, HIGH);
     delay(500);
   digitalWrite(ledVermelho, LOW);
     
  }
}
