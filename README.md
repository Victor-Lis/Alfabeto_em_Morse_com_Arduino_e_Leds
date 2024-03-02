# Alfabeto em Morse com Arduino e Leds 
A ideia desse projeto surgiu durante mais uma aula de S(istemas) E(mbarcados) da por meus professores Robson Aparecido e Kátia Maria, eles estavam ensinando sobre o tinkercad, uma plataforma muito bacana, que mesmo antes das aulas de S.E. desse ano eu já havia conversado com eles sobre e feito alguns testes.

Por fim eles passaram o desafio de fazer um código piscar em morse, tinhamos pouco mais de 15 minutos para escrever nossos nomes, eu estavando copiando e colando o código até que percebi que para facilitar a interpretação da tabela de morse e entender onde era um "." e onde era um "_" seria mais fácil criar uma função, surgindo assim as seguintes funções:

### Ponto
```c++
void ponto(){
  Serial.println(".");
  digitalWrite(led, HIGH);
  delay(300); // Wait for 1000 millisecond(s)
  digitalWrite(led, LOW);
  delay(300); // Wait for 1000 millisecond(s)
}
```

### Traço
```c++
void traco(){
  Serial.println("_");
  digitalWrite(led, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led, LOW);
  delay(300); // Wait for 1000 millisecond(s)
}
```

Com isso essa linha de raciocinio já facilitei e simplifiquei bastante meu código e consegui fazer em menos tempo do que o delimitado, porém comecei a pensar em melhoras e então criei a partir das funções acima uma função para cada letra, nos moldes dos exemplos abaixo:

### A
```c++
void a(){
  ponto();
  traco();
  Serial.println("a");
  delay(2000);
}
```
...

### Z
```c++
void z(){
  traco();
  traco();
  ponto();
  ponto();
  Serial.println("z");  
  delay(2000);
}
```

Claro, essa melhoria de criar uma função para cada letra do alfabeto veio após o prazo de 15 minutos, mas como ainda estava pensando na atividade optei por fazer essa melhoria, sendo assim meu código ficou muito mais fácil de se entender, já que por exemplo para escrever o meu primeiro nome bastava seguir o seguinte molde na função "loop()"

### Resultado do Meu Nome
```c++
void loop()
{
  v();
  i();
  c();
  t();
  o();
  r();
}
```

Após isso ainda fiz mais melhorias para facilitar o entendimento do código, criando 3 funções:

### Começo 
Para delimitar o começo da mensagem

```c++
void comeco(){
  Serial.println("COMEÇO");
}
```

### Pausa 
Para delimitar o espaço entre palavras

```c++
void pausa(){
  Serial.println("-PAUSA-");
  delay(5000);  
};
```

### Fim
Para delimitar o fim da mensagem

```c++
void fim(){
  Serial.println("FIM");
  delay(1000);  
}
```

## Resultado Final

```c++
void loop()
{
  comeco();
  f();
  e();
  i();
  t();
  o();
  pausa();
  p();
  o();
  r();
  pausa();
  d();
  e();
  v();
  pausa();
  v();
  i();
  c();
  t();
  o();
  r();
  fim();
}
```

- [Clique aqui para ver o resultado no tinkercad!](https://www.tinkercad.com/things/jL5NvSzcQOE-nome-morse)

## Autores

- [@Victor-Lis](https://github.com/Victor-Lis)
