// C++ code
//variaveis globais 
/*
  cria cada vetor temanho 4,
  fazendo parte do mesmo cadastro
*/
int qtdCadastro = 4;
String convidados[4];
int idadeConvidados[4]; //camel case
String emailConvidados[4];

//funções
void desenhaCabecalho()
{
  Serial.println("[---------------------------]");
  Serial.println(" ** BEM VINDO A FESTA ** ");
  Serial.println("[---------------------------]");
  Serial.println();
}

void setup()
{
 Serial.begin(9600);//inicia a comunicação serial
}

void loop()
{
  // fazer um cabeçalho bonitinho para o programa
  desenhaCabecalho(); //chama a funcao para desenha o cabeçalho
  //cadastrar os dados
  for(int i = 0; i < 4; i++)
  {
  //solicitar o nome do usuario
  Serial.println("informe " +String(i + 1)+ " o nome para cadastro");
  while(!Serial.available());
  convidados[i] =Serial.readString();
  Serial.println();
    
  // solicitar a idade 
    Serial.println("informe a idade de " + convidados[i]);
  while(!Serial.available());
  idadeConvidados[i] =Serial.parseInt();
    Serial.println();
    
  //solicitar o email
  Serial.println("informe o email de " + convidados[i]);
  while(!Serial.available());
  emailConvidados[i] =Serial.readString(); 
  Serial.println();
  }//fim do for
  
   //criar um for 
  //exibir com o print cada um doas arrys
  //pular uma linha
  //exibir a lista de convidados
  //obs: so vai na festa quem for maior de idade>= 18
  Serial.println(" ! exibindo convidados eleitos para a festa ! ");
  Serial.println();
  for(int i = 0; i <4; i++)
  {
    if(idadeConvidados[i] >= 18)
    {
   Serial.println("nome: " + convidados[i]);
   Serial.println("idade: " + String(idadeConvidados[i]));
   Serial.println("email: " + emailConvidados[i]);
   Serial.println("permissao para a festa: " + String(idadeConvidados[i] >= 18 ? "OK": "MENOR DE IDADE"));
 
   Serial.println("---------------");
   Serial.println();
    } //fim do if
  }//fim do for
  Serial.println();
  
  delay(2000);
}