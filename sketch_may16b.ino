//フルカラーLEDの制御

 int LED_PIN_R = 9;   // デジタルピン9番に赤色LEDを割り当てる(変数)
 int LED_PIN_G = 10;  // デジタルピン10番に緑色LEDを割り当てる(変数)
 int LED_PIN_B = 11;  // デジタルピン11番に青色LEDを割り当てる(変数)
 int WAIT = 500;      // 待ち時間の指定
 
 
 void setup(){
  
   pinMode(LED_PIN_R, OUTPUT);  // それぞれのピンを出力に設定
   pinMode(LED_PIN_G, OUTPUT);
   pinMode(LED_PIN_B, OUTPUT);
  
}
 
 
 void loop(){
  
   digitalWrite(LED_PIN_R, HIGH);
   digitalWrite(LED_PIN_G, LOW);   // 赤色LEDを点灯しその他を消灯
   digitalWrite(LED_PIN_B, LOW);
   delay(WAIT);
 
   digitalWrite(LED_PIN_R, LOW);
   digitalWrite(LED_PIN_G, HIGH);  // 緑色LEDを点灯しその他を消灯
   digitalWrite(LED_PIN_B, LOW);
   delay(WAIT);
 
   digitalWrite(LED_PIN_R, LOW);
   digitalWrite(LED_PIN_G, LOW);   // 青色LEDを点灯しその他を消灯
   digitalWrite(LED_PIN_B, HIGH);
   delay(WAIT);
  
}
