
//LEDを順番に点灯させる
int i ;

void setup(){
 for(i=2; i<=13; i=i+1) {
     pinMode(i, OUTPUT);
}
}

void loop(){
for(;;) {
  for(i=2; i<=13; i=i+1) {
    digitalWrite(i, HIGH);
    delay(500);
    digitalWrite(i, LOW);
  }
  for(i=12; i>=3; i=i-1) {
    digitalWrite(i, HIGH);
    delay(500);
    digitalWrite(i, LOW);
  }
}
}
