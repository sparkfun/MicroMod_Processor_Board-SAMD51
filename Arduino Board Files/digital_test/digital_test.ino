#include <Wire.h>

#define NUM_PINS 30
int pin = 0;
void setup()
{
  for( pin = 0; pin < NUM_PINS; pin++){
    pinMode(pin, OUTPUT);
  }

  Serial.begin(115200);
  while(!Serial){};
  Serial.println("---PIN TEST---");
}


void loop()
{
  int pinOut = 0;
  while(true){
    Serial.print("PIN: ");
    Serial.println(pinOut);
    digitalWrite(pinOut, HIGH);
    delay(100);
    digitalWrite(pinOut, LOW);
    delay(100);

    Serial.println("End of Pins");
    String input = Serial.readStringUntil('\n');
    if(input == "n"){ 
      pinOut += 1; 
    }
  }

  delay(100);
}
