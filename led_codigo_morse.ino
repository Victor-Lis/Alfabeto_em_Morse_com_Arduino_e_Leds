int led = 8;

void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  comeco();
  v();
  i();
  c();
  t();
  o();
  r();
  fim();
  comeco();
  l();
  i();
  s();
  fim();
  comeco();
  b();
  r();
  o();
  n();
  z();
  o();
  fim();
}

void ponto(){
  Serial.println(".");
  digitalWrite(led, HIGH);
  delay(300); // Wait for 1000 millisecond(s)
  digitalWrite(led, LOW);
  delay(300); // Wait for 1000 millisecond(s)
}

void traco(){
  Serial.println("_");
  digitalWrite(led, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led, LOW);
  delay(300); // Wait for 1000 millisecond(s)
}

void a(){
  ponto();
  traco();
  Serial.println("a");
  delay(2000);
}

void b(){
  traco();
  ponto();
  ponto();
  ponto();
  Serial.println("b");
  delay(2000);
}

void c(){
  traco();
  ponto();
  traco();
  ponto();
  Serial.println("c");
  delay(2000);
}

void d(){
  traco();
  ponto();
  ponto();
  Serial.println("d");
  delay(2000);
}

void e(){
  ponto();
  Serial.println("e");
  delay(2000);
}

void f(){
  ponto();
  ponto();
  traco();
  ponto();
  Serial.println("f");
  delay(2000);
}

void g(){
  traco();
  traco();
  ponto();
  Serial.println("g");
  delay(2000);
}

void h(){
  ponto();
  ponto();
  ponto();
  ponto();
  Serial.println("h");
  delay(2000);
}

void i(){
  ponto();
  ponto();
  Serial.println("i");
  delay(2000);
}

void j(){
  ponto();
  traco();
  traco();
  traco();
  Serial.println("j");
  delay(2000);
}

void k(){
  ponto();
  traco();
  ponto();
  Serial.println("k");
  delay(2000);
}

void l(){
  ponto();
  traco();
  ponto();
  ponto();
  Serial.println("l");
  delay(2000);
}

void m(){
  traco();
  traco();
  Serial.println("m");  
  delay(2000);
}

void n(){
  traco();
  ponto();
  Serial.println("n");  
  delay(2000);
}

void o(){
  traco();
  traco();
  traco();
  Serial.println("o");  
  delay(2000);
}

void p(){
  ponto();
  traco();
  traco();
  ponto();
  Serial.println("p");  
  delay(2000);
}

void q(){
  traco();
  traco();
  ponto();
  traco();
  Serial.println("q");  
  delay(2000);
}

void r(){
  ponto();
  traco();
  ponto();
  Serial.println("r");  
  delay(2000);
}

void s(){
  ponto();
  ponto();
  ponto();
  Serial.println("s");  
  delay(2000);
}

void t(){
  traco();
  Serial.println("t");  
  delay(2000);
}

void u(){
  ponto();
  ponto();
  traco();
  Serial.println("u");  
  delay(2000);
}

void v(){
  ponto();
  ponto();
  ponto();
  traco();
  Serial.println("v");  
  delay(2000);
}

void w(){
  ponto();
  traco();
  traco();
  Serial.println("w");  
  delay(2000);
}

void x(){
  traco();
  ponto();
  ponto();
  traco();
  Serial.println("x");    
  delay(2000);
}

void y(){
  traco();
  ponto();
  traco();
  traco();
  Serial.println("y");  
  delay(2000);
}

void z(){
  traco();
  traco();
  ponto();
  ponto();
  Serial.println("z");  
  delay(2000);
}

void comeco(){
  Serial.println("COMEÇO");
}

void fim(){
  Serial.println("FIM");
  delay(5000);  
}
