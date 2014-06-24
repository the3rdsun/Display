#define ON LOW
#define OFF HIGH

#define PATTERN_0 0xc0
#define PATTERN_1 0xf9
#define PATTERN_2 0xa4
#define PATTERN_3 0xb0
#define PATTERN_4 0x99
#define PATTERN_5 0x92
#define PATTERN_6 0x82
#define PATTERN_7 0xf8
#define PATTERN_8 0x80
#define PATTERN_9 0x98

int ledA = 0;
int ledB = 1;
int ledC = 2;
int ledD = 3;
int ledE = 4;
int ledF = 5;
int ledG = 6;
int ledDP = 7;

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

// the loop routine runs over and over again forever:
void loop() {
  //Display pattern 1
  digitalWrite(CM1, HIGH);
  PORTD = PATTERN_8;
  delayMicroseconds(500);
  
  //Turn it off
  allOff();
  
  //Display pattern 2
  digitalWrite(CM2, HIGH);
  PORTD = PATTERN_9;
  delayMicroseconds(500);
  
  //Turn it off
  allOff();
  
  //Display pattern 3
  digitalWrite(CM3, HIGH);
  PORTD = PATTERN_1;
  delayMicroseconds(500);
  
  //Turn it off
  allOff();
  
  //Display pattern 4
  digitalWrite(CM4, HIGH);
  PORTD = PATTERN_0;
  delayMicroseconds(500);
  
  //Turn it off
  allOff();
  
}
