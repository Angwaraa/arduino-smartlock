#include <SoftwareSerial.h>
#include <Servo.h>

Servo myservo;
SoftwareSerial BTSerial(10, 11); // CONNECT BT RX PIN TO ARDUINO 11 PIN | CONNECT BT TX PIN TO ARDUINO 10 PIN
char commond = '0';

void setup() 
{
  myservo.attach(9);
  Serial.begin(9600);
  Serial.println("Enter AT commands:");
  BTSerial.begin(9600);  
}

void loop()
{

  // Keep reading from HC-05 and send to Arduino Serial Monitor
  if (BTSerial.available()){
    commond=BTSerial.read();
    Serial.write(commond);
  }

  // Keep reading from Arduino Serial Monitor and send to HC-05
  if (Serial.available()){
    commond=Serial.read();
    BTSerial.write(commond);
  }

  if(commond=='0'){
    myservo.write(0);  
    delay(1500);  
   }
 
   if(commond=='1'){
    myservo.write(130);  
    delay(1500);  
   }
}
