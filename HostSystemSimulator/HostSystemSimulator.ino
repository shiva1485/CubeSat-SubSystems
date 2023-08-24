#define baud  9600
#define sampleRate "1 sample per minute"

#define println(x) Serial.println(x);
#define print(x) Serial.print(x);
#define clear(x)   for (int i = 0; i < x; i++) println();

void setup() {
  Serial.begin(baud);
  Serial2.begin(baud,SERIAL_8N1,16,17); //RX->16, TX->17.
  pinMode(34,OUTPUT); //for requesting payload to send data to the host system.

  clear(40); // 40 new lines
  
  println("\tWelcome to Host System Simulator Program");
  println();
  println("HOST SYSTEM BOOTING UP.......\n");
  delay(500);

  println("Showing host system properties:\n");
  println("Using serial UART communication for communication with payload");
  println("(Host system) RX2 <---- TX (Pay Load)");
  println("Sampling rate of data from payload is "+ String(sampleRate));
  println("Baud rate between Host System and Pay Load is "+String(baud));

  delay(100);
  println();
  println("\t-----------Starting Communication With Pay Load-----------");

  //println("Enter in serial moniter for request to receive data from Pay Load")

}

void loop() {
  // put your main code here, to run repeatedly:
    if(Serial2.available()>0){
    println(Serial2.readString());
  }
}
