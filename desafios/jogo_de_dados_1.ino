//C++
//
Servo motor;
#include <Servo.h>
int ledVermelho = 7;
int ledVerde = 10;
int ledsAzuis[] = {2, 3, 4};  
int numLedsAzuis = 3;
int pinoServo = 12;
int acertos = 0;
int numeroSorteado;

void setup() {
  Serial.begin(9600);

  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  for (int i = 0; i < numLedsAzuis; i++) {
    pinMode(ledsAzuis[i], OUTPUT);
    digitalWrite(ledsAzuis[i], LOW); 
  }

  motor.attach(pinoServo);
  motor.write(0); 

  Serial.println("bem-vindo a fortaleza do dado sagrado!");
  Serial.println("adivinhe um número (1 a 6):");
  novoDesafio();
}

void loop() {
  if (Serial.available() > 0) {
    int tentativa = Serial.parseInt();

    if (tentativa < 1 || tentativa > 6) {
      Serial.println("digite um numero entre 1 e 6.");
      return;
    }

    Serial.print("voce escolheu: ");
    Serial.println(tentativa);
    Serial.print("numero sorteado: ");
    Serial.println(numeroSorteado);

    if (tentativa == numeroSorteado) {
      piscarLED(ledVerde);
      acertos++;
      Serial.print("acertou! Progresso: ");
      Serial.print(acertos);
      Serial.println("/3");

      if (acertos <= numLedsAzuis) {
        digitalWrite(ledsAzuis[acertos - 1], HIGH);
      }

      if (acertos == 3) {
        Serial.println("voce acertou! A porta se abre...");
        motor.write(12); 
        return; 
      }
    } else {
      piscarLED(ledVermelho);
      Serial.println("errou! Tente novamente...");
    }

    novoDesafio();
  }
}

void piscarLED(int pino) {
  digitalWrite(pino, HIGH);
  delay(500);
  digitalWrite(pino, LOW);
}

void novoDesafio() {
  numeroSorteado = random(1, 7); 
  Serial.println("tente novamente: adivinhe o número sorteado (1 a 6):");
}
