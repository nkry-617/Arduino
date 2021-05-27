
//DAWとArduinoをつなげる

int led=11;
//cc midi messages three bytes
byte statusByte;
byte ControllerNumber;
byte ControllerValue;
//cc midi message channel 1  1011 0000
byte ccmidi = 176;

void setup(){
  //test the leds
  
    pinMode(led ,OUTPUT);

     for(int j=0;j<255;j++){
      analogWrite(led,j);
      delay(1);
     }
   
      
      analogWrite(led ,0);
    
  //start the serial into the boud rate of 115200
  Serial.begin(115200);
}
void loop(){
  //waite for a midi message
  while(Serial.available() <3);
  //run the function that will control the leds
  readmidi();
  
  }
void readmidi(){
  
  do{
    //sheck if there is any message
    if (Serial.available()){
      //store the data into the variables 
      statusByte = Serial.read();
      ControllerNumber = Serial.read();
      ControllerValue = Serial.read(); 
      //check if the message is a cc midi message
      if (statusByte==ccmidi){

        //controll the leds acording to the data bytes
        
          if(ControllerNumber==22) analogWrite(led,ControllerValue*2);
        
      }
    }
  }
  //repeat until there is no message
  while (Serial.available() > 2);
}
