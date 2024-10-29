// Define as portas para cada cor do semáforo e o buzzer
const int farol_verde = 9;
const int farol_amarelo = 11;
const int farol_vermelho = 13;
const int buzzer = 7; // Define a porta do buzzer

void setup()
{
  // Configura cada porta como saída para controlar os LEDs e o buzzer
  pinMode(farol_verde, OUTPUT);
  pinMode(farol_amarelo, OUTPUT);
  pinMode(farol_vermelho, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  // Liga o LED vermelho e desliga os outros LEDs e o buzzer
  digitalWrite(farol_amarelo, LOW);
  digitalWrite(farol_verde, LOW);
  digitalWrite(farol_vermelho, HIGH);
  digitalWrite(buzzer, LOW); // Desliga o buzzer
  delay(6000); // LED vermelho aceso por 6 segundos 

  // Liga o LED amarelo e desliga os outros LEDs e o buzzer
  digitalWrite(farol_vermelho, LOW);
  digitalWrite(farol_amarelo, HIGH);
  digitalWrite(farol_verde, LOW);
  digitalWrite(buzzer, LOW); // Desliga o buzzer
  delay(2000); // LED amarelo aceso por 2 segundos

  // Liga o LED verde e desliga os outros LEDs e liga o buzzer
  digitalWrite(farol_vermelho, LOW);
  digitalWrite(farol_amarelo, LOW);
  digitalWrite(farol_verde, HIGH);
  tone(buzzer, 255, 4000); // Ativa o buzzer pelo tempo do farol verde
  delay(4000); // LED verde aceso por 4 segundos

  // Liga o LED amarelo e desliga os outros LEDs e o buzzer
  digitalWrite(farol_vermelho, LOW);
  digitalWrite(farol_amarelo, HIGH);
  digitalWrite(farol_verde, LOW);
  digitalWrite(buzzer, LOW); // Desliga o buzzer
  delay(2000); // LED amarelo aceso por 2 segundos
}
