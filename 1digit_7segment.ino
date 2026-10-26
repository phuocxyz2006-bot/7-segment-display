int A = 5;
int B = 6; 
int DP = 7;
int C = 8;
int D = 9;
int E = 10;
int F = 11;
int G = 12;
int time = 1000;
void setup(){
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(DP,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);
}
void loop(){
  so0();delay(time);
  so1();delay(time);
  so2();delay(time);
  so3();delay(time);
  so4();delay(time);
  so5();delay(time);
  so6();delay(time);
  so7();delay(time);
  so8();delay(time);
  so9();delay(time);
}
void tathet(){
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(C,LOW);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
}
void sanghet(){
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
}
void so0(){
  sanghet();
  digitalWrite(G,LOW);
}
void so1(){
  tathet();
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
}
void so2(){
  tathet();
  sanghet();
  digitalWrite(C,LOW);
  digitalWrite(F,LOW);
}
void so3(){
  tathet();
  sanghet();
  digitalWrite(E,LOW);
  digitalWrite(F,LOW);
}
void so4(){
  tathet();
  sanghet();
  digitalWrite(A,LOW);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
}
void so5(){
  tathet();
  sanghet();
  digitalWrite(B,LOW);
  digitalWrite(E,LOW);
}
void so6(){
  tathet();
  sanghet();
  digitalWrite(B,LOW);
}
void so7(){
  tathet();
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
}
void so8(){
  tathet();
  sanghet();
}
void so9(){
  tathet();
  sanghet();
  digitalWrite(E,LOW);
}
