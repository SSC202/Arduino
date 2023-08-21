#include <Arduino.h>
#line 1 "S:\\STM32SSC\\Arduino\\Code\\0_Test\\0_Test\\0_Test.ino"
int led = 13;

#line 3 "S:\\STM32SSC\\Arduino\\Code\\0_Test\\0_Test\\0_Test.ino"
void setup();
#line 8 "S:\\STM32SSC\\Arduino\\Code\\0_Test\\0_Test\\0_Test.ino"
void loop();
#line 3 "S:\\STM32SSC\\Arduino\\Code\\0_Test\\0_Test\\0_Test.ino"
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  delay(1000);  
}

