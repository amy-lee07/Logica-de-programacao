// C++ code
//
void setup()
{
  Serial.begin(9600);
}
 //inicializacao de variaveis
int caixaPequena = 0;// -32768 ate 32767 (faixa inicial e final do int)
long caixaGrande = 0;// -2147483648 ate 2147483647 (faixa inicial e final do long)

void loop()
{
  caixaPequena = 32768098;//truncou o valor (cortou, pois estoura a faixa permitida)
  caixaGrande = 32768098;
  
  Serial.println(caixaPequena);
  Serial.println(caixaGrande);
  
  delay(20000);//20 segundos
}