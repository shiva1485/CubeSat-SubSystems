
// int stateConv(bool state){
//   if(state){
//     return HIGH;
//   }
//   else{
//     return LOW;
//   }
// }

// void signalGenerator(int time){
//   bool state = true; // this means it is high in signal
//   while(true){
//     digitalWrite(13,stateConv(state));
//     Serial.println("signal state: "+String(state));
//     state = !state;
//     delay(time);
//   } 
// }

// void setup() {
//   Serial.begin(9600);
//   pinMode(13,OUTPUT); //this is for stm32 which send's signal's to the esp32(backup)

//   signalGenerator(1000); //sending data for every 20 micro seconds.
// }


// void loop() {
//   //digitalWrite(13,HIGH);
// }



void setup()
{
  Serial.begin(9600);

  while(true){
    Serial.println("hello");
    delay(700);
  }
}

void loop(){

}