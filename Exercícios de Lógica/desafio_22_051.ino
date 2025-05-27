// C++ code
//Se você errar, o sistema piscará um LED vermelho, indicando que você foi testado e falhou.
//Se acertar, um LED verde piscará como sinal de aprovação divina, e uma das joias azuis do
//templo (representadas por LEDs azuis) se acenderá, marcando o seu progresso.
//Ao conquistar 3 acertos, todas as joias estarão acesas — e a Porta da Sabedoria
//(controlada por um servo motor) se abrirá magicamente, permitindo sua
//passagem ao templo.
//variáveis
int acertos = 1;
int ledAzul1 = 4;
int ledAzul2 = 3;
int ledAzul3 = 2;
int ledVerde = 9;
int ledVermelho = 7;

#include <Servo.h>
Servo meuServo;  //Cria um objeto servo
Servo motor;
void setup()
{
  // Conecta o servo ao pino digital 12
 //equivalente ao pinMode(9, OUTPUT)
  motor.attach(12);//configura o motor na porta 12
  motor.write(0);//configura a posição inicial em 0 graus 
  
  Serial.begin(9600);//inicia a comunicação serial
  randomSeed(analogRead(0));//inicia e normaliza a porta rendomica para evitar pega o mesmo valor
}

void loop()
{

  //solicitar o palpite do usuário - 3 comandos
  Serial.println("Digite um palpite entre 1 e 10 ");
  while(!Serial.available());
  int palpite = Serial.parseInt();

  //digite o numero - sorteio um número randomico/aleatório de 1 até 10 
  int numeroSorteado = random(1, 9);//número entre 1 e 10

  Serial.println("digitando o numero" );

 
  Serial.println();

  Serial.println("Seu palpite: " + String(palpite));
  Serial.println("Numero Sorteado: " + String(numeroSorteado));

  if(palpite == numeroSorteado){
    Serial.println("Parabens, voce acertou!!" );
  }else{
    Serial.println("Que pena, tente outra vez !! " );
  }

  Serial.println("Reiniciando o programa .... ");
  Serial.println();
  delay(700); 
}