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

void displayDigit(int common, int pattern) {
  if (pattern == 0) {
    PORTD = PATTERN_0;
    
  }
  
  if (pattern == 1) {
    PORTD = PATTERN_1; 
    
  }
  
  if (pattern == 2) {
    PORTD = PATTERN_2; 
    
  }
  
  if (pattern == 3) {
    PORTD = PATTERN_3; 
    
  }
  
  if (pattern == 4) {
    PORTD = PATTERN_4; 
    
  }
  
  if (pattern == 5) {
    PORTD = PATTERN_5; 
    
  }
  
  if (pattern == 6) {
    PORTD = PATTERN_6; 
    
  }
  
  if (pattern == 7) {
    PORTD = PATTERN_7; 
    
  }
  
  if (pattern == 8) {
    PORTD = PATTERN_8; 
    
  }
  
  if (pattern == 9) {
    PORTD = PATTERN_9; 
    
  }
  
  if (common == 1) {
    common = CM1; 
    
  }
  
  if (common == 2) {
    common = CM2; 
    
  }
  
  if (common == 3) {
    common = CM3; 
    
  }
  
  if (common == 4) {
    common = CM4; 
    
  }
  
  digitalWrite(common, HIGH);
  delayMicroseconds(500);
  digitalWrite(common, LOW);
  
}

// the loop routine runs over and over again forever:
void loop() {
  displayDigit(1, 2);
  displayDigit(2, 4);
  displayDigit(3, 9);
  displayDigit(4, 0);
  
}
