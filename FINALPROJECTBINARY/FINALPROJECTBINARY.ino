
int led4 = 7;
int led3 = 6;
int led2 = 5;
int led1 = 4;


void binaryLed(int num) {
    if(num== 1){
      digitalWrite(led4, 1);
      digitalWrite(led3, 0);
      digitalWrite(led2, 0);
      digitalWrite(led1, 0);
    }
    if(num== 2){
      digitalWrite(led4, 0);
      digitalWrite(led3, 1);
      digitalWrite(led2, 0);
      digitalWrite(led1, 0);
    }
    if(num== 3){
      digitalWrite(led4, 1);
      digitalWrite(led3, 1);
      digitalWrite(led2, 0);
      digitalWrite(led1, 0);
    }
    if(num== 4){
      digitalWrite(led4, 0);
      digitalWrite(led3, 0);
      digitalWrite(led2, 1);
      digitalWrite(led1, 0);
    }
    if(num== 5){
      digitalWrite(led4, HIGH);
      digitalWrite(led3, LOW);
      digitalWrite(led2, HIGH);
      digitalWrite(led1, LOW);
    }
    if(num== 6){
      digitalWrite(led4, 0);
      digitalWrite(led3, 1);
      digitalWrite(led2, 1);
      digitalWrite(led1, 0);
    }
    if(num== 7){
      digitalWrite(led4, 1);
      digitalWrite(led3, 1);
      digitalWrite(led2, 1);
      digitalWrite(led1, 0);
   }
    if(num== 8){
      digitalWrite(led4, 0);
      digitalWrite(led3, 0);
      digitalWrite(led2, 0);
      digitalWrite(led1, 1);
    }
    if(num== 9){
      digitalWrite(led4, HIGH);
      digitalWrite(led3, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led1, HIGH);
    }
    if(num== 0){
      digitalWrite(led4, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led1, LOW);
  }
}


void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);

}

void loop() {
  binaryLed(0);//Here you can change the number from 1 to 9
}
