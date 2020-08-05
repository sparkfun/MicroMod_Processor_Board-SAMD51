// Temp sketch for testing SAMD51
int D0 = 0;  
int D1 = 1;
int G0 = 2;
int G1 = 3;
int G2 = 4;
int G3 = 5;
int G4 = 6;
int G5 = 7;
int G6 = 8;

void setup() {

  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(G0, OUTPUT);
  pinMode(G1, OUTPUT);
  pinMode(G2, OUTPUT);
  pinMode(G3, OUTPUT);
  pinMode(G4, OUTPUT);
  pinMode(G5, OUTPUT);
  pinMode(G6, OUTPUT);
  pinMode(A5, OUTPUT);
  pinMode(A6, OUTPUT);
  Serial.begin(115200);
  Serial.println("Digital Test.");
  while(!Serial){};

}

void loop() {
 // Serial.println("D0");
 // digitalWrite(D0, HIGH);
 // delay(2000);
 // Serial.println("D0");
 // digitalWrite(D0, LOW);
 // delay(2000);
 // Serial.println("D1");
 // digitalWrite(D1, HIGH);
 // delay(2000);
 // Serial.println("D1");
 // digitalWrite(D1, LOW);
 // delay(2000);
 // Serial.println("G0");
 // digitalWrite(G0, HIGH);
 // delay(2000);
 // Serial.println("G0");
 // digitalWrite(G0, LOW);
 // delay(2000);
 // Serial.println("G1");
 // digitalWrite(G1, HIGH);
 // delay(2000);
 // Serial.println("G1");
 // digitalWrite(G1, LOW);
 // delay(2000);
 // Serial.println("G2");
 // digitalWrite(G2, HIGH);
 // delay(2000);
 // Serial.println("G2");
 // digitalWrite(G2, LOW);
 // delay(2000);
 // Serial.println("G3");
 // digitalWrite(G3, HIGH);
 // delay(2000);
 // Serial.println("G3");
 // digitalWrite(G3, LOW);
 // delay(2000);
 // Serial.println("G4");
 // digitalWrite(G4, HIGH);
 // delay(2000);
 // Serial.println("G4");
 // digitalWrite(G4, LOW);
 // delay(2000);
 // Serial.println("G5");
 // digitalWrite(G5, HIGH);
 // delay(2000);
 // Serial.println("G5");
 // digitalWrite(G5, LOW);
 // delay(2000);
 // Serial.println("G6");
 // digitalWrite(G6, HIGH);
 // delay(2000);
 // Serial.println("G6");
 // digitalWrite(G6, LOW);
 // delay(2000);
 // Serial.println("G6");
  Serial.println("A5");
  digitalWrite(A5, HIGH);
  delay(2000);
  Serial.println("A5");
  digitalWrite(A5, LOW);
  delay(2000);
  Serial.println("A6");
  digitalWrite(A6, HIGH);
  delay(2000);
  Serial.println("A6");
  digitalWrite(A6, LOW);
  delay(2000);

}

