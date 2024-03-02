int led = 8;

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
}

void ponto(){
  digitalWrite(led, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led, LOW);
  delay(300); // Wait for 1000 millisecond(s)
}

void traco(){
  digitalWrite(led, HIGH);
  delay(300); // Wait for 1000 millisecond(s)
  digitalWrite(led, LOW);
  delay(300); // Wait for 1000 millisecond(s)
}
