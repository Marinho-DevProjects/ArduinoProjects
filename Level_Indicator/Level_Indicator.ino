const int potPin = A0;
const int ledVermelho = 10;
const int ledAmarelo = 9;
const int ledAzul = 8;

void setup()
{
  Serial.begin(9600);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledAzul, OUTPUT);
}

void loop()
{
  int valorPot = analogRead(potPin);
  valorPot = map(valorPot, 0, 1023, 0, 100);
   
    if (valorPot <= 20) 
    {
      digitalWrite(ledVermelho, HIGH);
    } 
    else 
    {
      digitalWrite(ledVermelho, LOW);
    }

    if (valorPot > 20 && valorPot <= 50) 
    {
      digitalWrite(ledAmarelo, HIGH);
    } 
    else 
    {
      digitalWrite(ledAmarelo, LOW);
    }

    if (valorPot > 50) 
    {
      digitalWrite(ledAzul, HIGH);
    } 
    else
    {
      digitalWrite(ledAzul, LOW);
    }
  
}
