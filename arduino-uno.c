int sinalPedestre = 0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, INPUT);
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  //  Carro Vermelho
  digitalWrite(11, HIGH);
  digitalWrite(4, HIGH);
  delay(5000); //sensor ligado por 5 segundos
  digitalWrite(4, LOW);
  delay(700); // Wait for 700 millisecond(s)
  digitalWrite(11, LOW);
  digitalWrite(2, HIGH);
  delay(100); // Wait for 100 millisecond(s)
  // Carro Verde
  digitalWrite(13, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(13, LOW);
  delay(100); // Wait for 100 millisecond(s)
  // Carro Amarelo
  digitalWrite(12, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(12, LOW);
  digitalWrite(2, LOW);
  delay(100); // Wait for 100 millisecond(s)
  
 
}

