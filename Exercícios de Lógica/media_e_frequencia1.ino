//Calcule a média entre duas notas e Verifique se o aluno foi aprovado
//Aprovado se média é MAIR OU IGUAL A 6 e SE A frequênciaÉ MAIOR OU IGUAL 75%.

 //variáveis
 
int notaUm = 0;
int notaDois = 0;
int media = 0;
int calculeMedia = 0;
int frequencia = 0; 

void setup()
{
 Serial.begin(9600); 
}

void loop()
{
  Serial.println( "Digite a primeira nota :" );
  while (!Serial.available()) {}  
}