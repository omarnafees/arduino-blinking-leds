  int RedLED=3;

void setup() {

  pinMode (3,OUTPUT);

}

void loop() {
  digitalWrite (RedLED,HIGH);
  delay (500);
  digitalWrite (RedLED,LOW);

  delay (500);


}
