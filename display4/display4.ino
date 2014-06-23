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
  
  digitalWrite(ledA, OFF);
  digitalWrite(ledB, OFF);
  digitalWrite(ledC, OFF);
  digitalWrite(ledD, OFF);
  digitalWrite(ledE, OFF);
  digitalWrite(ledF, OFF);
  digitalWrite(ledG, OFF);
  digitalWrite(ledDP, OFF);
}

// the loop routine runs over and over again forever:
void loop() {
  //Display pattern 1
  digitalWrite(ledB, ON);
  digitalWrite(ledC, ON);
  digitalWrite(CM1, HIGH);
  delayMicroseconds(500);
  
  //Turn it off
  digitalWrite(ledB, OFF);
  digitalWrite(ledC, OFF);
  digitalWrite(CM1, LOW);
  
  //Display pattern 2
  digitalWrite(ledA, ON);
  digitalWrite(ledB, ON);
  digitalWrite(ledD, ON);
  digitalWrite(ledE, ON);
  digitalWrite(ledG, ON);
  digitalWrite(CM2, HIGH);
  delayMicroseconds(500);
  
  //Turn it off
  digitalWrite(ledA, OFF);
  digitalWrite(ledB, OFF);
  digitalWrite(ledD, OFF);
  digitalWrite(ledE, OFF);
  digitalWrite(ledG, OFF);
  digitalWrite(CM2, LOW);
  
  //Display pattern 3
  digitalWrite(ledA, ON);
  digitalWrite(ledB, ON);
  digitalWrite(ledC, ON);
  digitalWrite(ledD, ON);
  digitalWrite(ledG, ON);
  digitalWrite(CM3, HIGH);
  delayMicroseconds(500);
  
  //Turn it off
  digitalWrite(ledA, OFF);
  digitalWrite(ledB, OFF);
  digitalWrite(ledC, OFF);
  digitalWrite(ledD, OFF);
  digitalWrite(ledG, OFF);
  digitalWrite(CM3, LOW);
  
  //Display pattern 4
  digitalWrite(ledB, ON);
  digitalWrite(ledC, ON);
  digitalWrite(ledF, ON);
  digitalWrite(ledG, ON);
  digitalWrite(CM4, HIGH);
  delayMicroseconds(500);
  
  //Turn it off
  digitalWrite(ledB, OFF);
  digitalWrite(ledC, OFF);
  digitalWrite(ledF, OFF);
  digitalWrite(ledG, OFF);
  digitalWrite(CM4, LOW);
  
}
