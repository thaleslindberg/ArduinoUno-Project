void setup()
{
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);
}

int i = 0;
void loop()
{
  delay(2000);// esperar 2 segundos até que o LED 1 seja aceso
  digitalWrite(6, HIGH);
  delay(3000);//LED 6 aceso por 3 segundos
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  delay(3000); 
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);//atribui nível lógico alto ao pino do LED, acendendo-o
  delay(3000); 
  digitalWrite(4, LOW);//Atribui nível lógico baixo ao pino do LED, apagando-o
  digitalWrite(3, HIGH);
  delay(3000); 
  digitalWrite(3, LOW);
  digitalWrite(2, HIGH);
  delay(3000); 
  digitalWrite(2, LOW);
  digitalWrite(1, HIGH);
  delay(3000); 
  digitalWrite(1, LOW);
  
  delay(3000);
  
  while(i < 6){
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);    
	}
}
