int var = 3;
float myfloat = 3.3;

int led = 4;
int led2 = 3;
int led3 = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello World");
  digitalWrite(led, HIGH);
  delay(3000);
  digitalWrite(led, LOW);
  delay(3000);
  digitalWrite(led2, HIGH);
  delay(3000);
  digitalWrite(led2, LOW);
  delay(3000);
  digitalWrite(led3, HIGH);
  delay(3000);
  digitalWrite(led3, LOW);
  delay(3000);
}
