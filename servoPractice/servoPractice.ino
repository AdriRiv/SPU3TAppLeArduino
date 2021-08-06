
#include <Servo.h>

int const PotPin=A0;
int valPot=0;

Servo servo1;
int pwrOut= 4;


void setup() {
  // put your setup code here, to run once:
  servo1.attach(pwrOut);
  servo1.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
    valpot= analogRead(PotPin);
    int rangeDegrees = map(valPot, 0, 1024, 0, 1);
    servo1.write(rangeDegrees);
  
}
