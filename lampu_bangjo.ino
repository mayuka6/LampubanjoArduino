int led1=5;
int led2=6;
int led3=8;
void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
}

void loop() {
  digitalWrite(led1,HIGH);
  delay(5000);
  digitalWrite(led2,HIGH);
  delay(2000);
  digitalWrite(led3,HIGH);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  delay(5000);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  delay(2000);
  digitalWrite(led2,LOW);

}
