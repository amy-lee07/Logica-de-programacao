// C++ code
/*Do While- E uma estrutura de reperticao que executa pelo menos uma vez independente da condicao.
Em seguida continuara executando enquanto a condicao for verdadeira .
*/
/* Do while- e uma estrutura de repeticao que executa PELO MENOS UMA VEZ indepedente de condicao.
Em seguida, continuara executando enquanto a condicao for verdadeira.
*/
/*For- e uma estrutara de repeticao que tem dentro da condicao a inicializacao, a propria
condicao do for e incremento
Ponto de atencao: as definicoes sao separadas ´por ;
*/

void setup()
{
  Serial.begin(9600);
}
int numero1;
int resultado;
void loop()
{
  Serial.println("digite o numero que quer saber a tabuada: ");
  while(! Serial.available()) {} 
  numero1 = Serial.parseInt();
  
  for(int numero2 = 1; numero2 <= 10; numero2++){
  resultado = numero1 * numero2;
  Serial.println(String(numero1) + "*" + String(numero2) + "=" + String(resultado));  
  }
  
}