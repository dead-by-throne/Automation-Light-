const int ledPin = 5;
const int ldrPin = A0;

void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(5, OUTPUT);
  pinMode(A0, INPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  int ldrResistor = analogRead(A0);
  if (ldrResistor <= 300)
      {
      digitalWrite(5, LOW);
      Serial.println("Cuaca terang, Lampu akan mati");
      }
  else
      {
        digitalWrite(5, HIGH);
        Serial.println("Cuaca gelap, Lampu akan nyala");
      }
}
