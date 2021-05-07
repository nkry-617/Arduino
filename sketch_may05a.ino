//CdSセルを使って明るさを検知する

int CDS_SOCKET = 0;


void setup() {
  Serial.begin(9600);
  

}

void loop() {
  int analog_val;
  float input_volt;
  String message = "";

  analog_val = analogRead(CDS_SOCKET);

  input_volt = float(analog_val)*(5.0/1023.0);
  
if (input_volt > 1.0){

        message = "Lighted : ";
   } else {

    message = "Dark : ";
   }
   Serial.print(message);
   Serial.print(input_volt);
   Serial.println("V");

   delay (500);
   

}
