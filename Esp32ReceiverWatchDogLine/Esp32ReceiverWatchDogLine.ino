

void checkData(int timeRef) {
  while (true) {
    if (digitalRead(23)) {
      Serial.println("stm32 is alive!");
    } else {
      Serial.println("stm32 is dead!");
    }

    //delay(1000);
  }
}


void setup() {
  Serial.begin(115200);  // reciver code of esp32 backup from stm32
  Serial2.begin(9600, SERIAL_8N1, 16, 17);
  //pinMode(23,INPUT);

  //checkData(1000); //data check for every 1 sec for reference
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial2.available() > 0) {
    Serial.println("Data from stm32 " + Serial2.readString());
  }
}
