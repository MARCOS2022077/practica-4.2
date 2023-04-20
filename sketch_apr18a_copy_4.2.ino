#include <Servo.h>
const int pul = 2;
const int pul_2 = 3;
const int pul_3 = 4;
const int pul_4 =5;
const int pul_5 =6;
const int buzzer = 8;
Servo lauda;
const int entrada_1;
const int entrada_2;
const int entrada_3;
const int entrada_4;
const int entrada_5;
#define entrada_1() pinMode(pul,INPUT)
#define entrada_2() pinMode(pul_2,INPUT)
#define entrada_3() pinMode(pul_3,INPUT)
#define entrada_4() pinMode(pul_4,INPUT)
#define entrada_5() pinMode(pul_5,INPUT)
#define bencendido() tone(buzzer,200.0, 1000)
#define bapagado() noTone(buzzer)
#define tiempo() delay(1500)
int L;
int A;
int U;
int D;
int O;
void setup() {
entrada_1(); 
entrada_2();
entrada_3(); 
entrada_4();
entrada_5();
lauda.attach(7);
bapagado();
bencendido();
}

void loop() {
  L = digitalRead(pul);
  if (L == 1) {
    lauda.write(180);
    tiempo();
  }else{
    bapagado();
  }

  int A = digitalRead(pul_2);
  if (A == HIGH) {
    lauda.write(135);
    tiempo();
  }else{
    bapagado();
  }

   U = digitalRead(pul_3);
  if (U ==HIGH) {
    lauda.write(90);
    tiempo();
  }else{
    bapagado();
  }

   D = digitalRead(pul_4);
  if (D == HIGH) {
    lauda.write(45);
    tiempo();
  }else{
    bapagado();
  }

   O = digitalRead(pul_5);
  if (O == HIGH) {
    bencendido();
    lauda.write(0);
    tiempo();
  }else{
    bapagado();
  }
}