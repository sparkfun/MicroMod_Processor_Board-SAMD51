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

#define PIN_SERIAL2_RX       25
#define PIN_SERIAL2_TX       26
#define PAD_SERIAL2_TX       (UART_TX_PAD_0)
#define PAD_SERIAL2_RX       (SERCOM_RX_PAD_1)

Uart Serial2(&sercom3, 25, 26, PAD_SERIAL2_RX, PAD_SERIAL2_TX);

void SERCOM3_0_Handler()
{
  Serial2.IrqHandler();
}
void SERCOM3_1_Handler()
{
  Serial2.IrqHandler();
}
void SERCOM3_2_Handler()
{
  Serial2.IrqHandler();
}
void SERCOM3_3_Handler()
{
  Serial2.IrqHandler();
}


void setup() {

  //pinMode(D0, OUTPUT);
  //pinMode(D1, OUTPUT);
  //pinMode(G0, OUTPUT);
  //pinMode(G1, OUTPUT);
  //pinMode(G2, OUTPUT);
  //pinMode(G3, OUTPUT);
  //pinMode(G4, OUTPUT);
  //pinMode(G5, OUTPUT);
  //pinMode(G6, OUTPUT);
  //pinMode(A1, OUTPUT);
  //pinMode(A2, OUTPUT);
  //pinMode(A3, OUTPUT);
  //pinMode(A4, OUTPUT);
  //pinMode(A5, OUTPUT);
  //pinMode(A6, OUTPUT);
  //pinMode(23, OUTPUT);
  //pinMode(24, OUTPUT);
  //Serial.begin(115200);
  //Serial1.begin(9600);
  Serial2.begin(9600);
  //while(!Serial){delay(100);};
  //Serial.println("Digital Test.");

}

void loop() {

  //Serial1.print("1");
  Serial2.write("1");
  //Serial.print(Serial1.read());
  //Serial.print("1");
  delay(100);
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
  //Serial.println("A0");
  //digitalWrite(A0, HIGH);
  //delay(2000);
  //Serial.println("A0");
  //digitalWrite(A0, LOW);
  //delay(2000);
  //Serial.println("A1");
  //digitalWrite(A1, HIGH);
  //delay(2000);
  //Serial.println("A1");
  //digitalWrite(A1, LOW);
  //delay(2000);
  //Serial.println("A2");
  //digitalWrite(A2, HIGH);
  //delay(2000);
  //Serial.println("A2");
  //digitalWrite(A2, LOW);
  //delay(2000);
  //Serial.println("A3");
  //digitalWrite(A3, HIGH);
  //delay(2000);
  //Serial.println("A3");
  //digitalWrite(A3, LOW);
  //delay(2000);
  //Serial.println("A4");
  //digitalWrite(A4, HIGH);
  //delay(2000);
  //Serial.println("A4");
  //digitalWrite(A4, LOW);
  //delay(2000);
  //Serial.println("A5");
  //digitalWrite(A5, HIGH);
  //delay(2000);
  //Serial.println("A5");
  //digitalWrite(A5, LOW);
  //delay(2000);
  //Serial.println("A6");
  //digitalWrite(A6, HIGH);
  //delay(2000);
  //Serial.println("A6");
  //digitalWrite(A6, LOW);
  //delay(2000);
 // Serial.println("CANTX");
 // digitalWrite(23, HIGH);
 // delay(2000);
 // Serial.println("CANTX");
 // digitalWrite(23, LOW);
 // delay(2000);
 // Serial.println("CANRX");
 // digitalWrite(24, HIGH);
 // delay(2000);
 // Serial.println("CANRX");
 // digitalWrite(24, LOW);
 // delay(2000);

}

