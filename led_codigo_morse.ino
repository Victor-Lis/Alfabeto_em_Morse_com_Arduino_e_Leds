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

void a(){
  ponto();
  traco();
  delay(2000);
}

void b(){
  traco();
  ponto();
  ponto();
  ponto();
  delay(2000);
}

void c(){
  traco();
  ponto();
  traco();
  ponto();
  delay(2000);
}

void d(){
  traco();
  ponto();
  ponto();
  delay(2000);
}

void e(){
  ponto();
  delay(2000);
}

void f(){
  ponto();
  ponto();
  traco();
  ponto();
  delay(2000);
}

void g(){
  traco();
  traco();
  ponto();
  delay(2000);
}

void h(){
  ponto();
  ponto();
  ponto();
  ponto();
  delay(2000);
}

void i(){
  ponto();
  ponto();
  delay(2000);
}

void j(){
  ponto();
  traco();
  traco();
  traco();
  delay(2000);
}

void k(){
  ponto();
  traco();
  ponto();
  delay(2000);
}

void l(){
  ponto();
  traco();
  ponto();
  ponto();
  delay(2000);
}

void m(){
  traco();
  traco();
  delay(2000);
}

void n(){
  traco();
  ponto();
  delay(2000);
}

void o(){
  traco();
  traco();
  traco();
  delay(2000);
}

void p(){
  ponto();
  traco();
  traco();
  ponto();
  delay(2000);
}

void q(){
  traco();
  traco();
  ponto();
  traco();
  delay(2000);
}

void r(){
  ponto();
  traco();
  ponto();
  delay(2000);
}

void s(){
  ponto();
  ponto();
  ponto();
  delay(2000);
}

void t(){
  traco();
  delay(2000);
}

void u(){
  ponto();
  ponto();
  traco();
  delay(2000);
}

void v(){
  ponto();
  ponto();
  ponto();
  traco();
  delay(2000);
}

void w(){
  ponto();
  traco();
  traco();
  delay(2000);
}

void x(){
  traco();
  ponto();
  ponto();
  traco();
  delay(2000);
}

void y(){
  traco();
  ponto();
  traco();
  traco();
  delay(2000);
}

void z(){
  traco();
  traco();
  ponto();
  ponto();
  delay(2000);
}
