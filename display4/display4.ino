#define ON LOW
#define OFF HIGH

int ledA = 2;
int ledB = 3;
int ledC = 4;
int ledD = 5;
int ledE = 6;
int ledF = 7;
int ledG = 8;
int ledDP = 9;

int CM1 = 10;
int CM2 = 11;
int CM3 = 12;
int CM4 = 13;

int delayOn = 1500;
int delayOff = 500;

void allOff() {
  digitalWrite(ledA, OFF);
  digitalWrite(ledB, OFF);
  digitalWrite(ledC, OFF);
  digitalWrite(ledD, OFF);
  digitalWrite(ledE, OFF);
  digitalWrite(ledF, OFF);
  digitalWrite(ledG, OFF);
  digitalWrite(ledDP, OFF);
  
  digitalWrite(CM1, LOW);
  digitalWrite(CM2, LOW);
  digitalWrite(CM3, LOW);
  digitalWrite(CM4, LOW);
}

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledC, OUTPUT);
  pinMode(ledD, OUTPUT);
  pinMode(ledE, OUTPUT);
  pinMode(ledF, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledDP, OUTPUT);
  
  pinMode(CM1, OUTPUT);
  pinMode(CM2, OUTPUT);
  pinMode(CM3, OUTPUT);
  pinMode(CM4, OUTPUT);
  
  allOff();
 
}

void display0() {
  digitalWrite(ledA, ON);
  digitalWrite(ledB, ON);
  digitalWrite(ledC, ON);
  digitalWrite(ledD, ON);
  digitalWrite(ledE, ON);
  digitalWrite(ledF, ON);
  delayMicroseconds(500);
 
}

void display1() {
  digitalWrite(ledB, ON);
  digitalWrite(ledC, ON);
  delayMicroseconds(500);
  
}

void display2() {
  digitalWrite(ledA, ON);
  digitalWrite(ledB, ON);
  digitalWrite(ledD, ON);
  digitalWrite(ledE, ON);
  digitalWrite(ledG, ON);
  delayMicroseconds(500);
  
}

void display3() {
  digitalWrite(ledA, ON);
  digitalWrite(ledB, ON);
  digitalWrite(ledC, ON);
  digitalWrite(ledD, ON);
  digitalWrite(ledG, ON);
  delayMicroseconds(500);

}

void display4() {
  digitalWrite(ledB, ON);
  digitalWrite(ledC, ON);
  digitalWrite(ledF, ON);
  digitalWrite(ledG, ON);
  delayMicroseconds(500);

}

void display5() {
  digitalWrite(ledA, ON);
  digitalWrite(ledC, ON);
  digitalWrite(ledD, ON);
  digitalWrite(ledF, ON);
  digitalWrite(ledG, ON);
  delayMicroseconds(500);

}

void display6() {
  digitalWrite(ledA, ON);
  digitalWrite(ledC, ON);
  digitalWrite(ledD, ON);
  digitalWrite(ledE, ON);
  digitalWrite(ledF, ON);
  digitalWrite(ledG, ON);
  delayMicroseconds(500);

}

void display7() {
  digitalWrite(ledA, ON);
  digitalWrite(ledB, ON);
  digitalWrite(ledC, ON);
  delayMicroseconds(500);

}

void display8() {
  digitalWrite(ledA, ON);
  digitalWrite(ledB, ON);
  digitalWrite(ledC, ON);
  digitalWrite(ledD, ON);
  digitalWrite(ledE, ON);
  digitalWrite(ledF, ON);
  digitalWrite(ledG, ON);
  delayMicroseconds(500);

}

void display9() {
  digitalWrite(ledA, ON);
  digitalWrite(ledB, ON);
  digitalWrite(ledC, ON);
  digitalWrite(ledF, ON);
  digitalWrite(ledG, ON);
  delayMicroseconds(500);

}

// the loop routine runs over and over again forever:
void loop() {
  //Display pattern 1
  digitalWrite(CM1, HIGH);
  display5();
  
  //Turn it off
  allOff();
  
  //Display pattern 2
  digitalWrite(CM2, HIGH);
  display6();
  
  //Turn it off
  allOff();
  
  //Display pattern 3
  digitalWrite(CM3, HIGH);
  display7();
  
  //Turn it off
  allOff();
  
  //Display pattern 4
  digitalWrite(CM4, HIGH);
  display8();
  
  //Turn it off
  allOff();
  
}
