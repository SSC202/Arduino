# 1 "S:\\STM32SSC\\Arduino\\Code\\0_Test\\0_Test\\0_Test.ino"
int led = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,0x1);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,0x1);
  delay(1000);
  digitalWrite(led,0x0);
  delay(1000);
}
