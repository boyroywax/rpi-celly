/**
*  @filename   :   SendMessage.ino
*  @brief      :   SIM800C GSM/GPRS HAT demo
*  @author     :   Kaloha from Waveshare
*
*  Copyright (C) Waveshare     February 20 2019
*  http://www.waveshare.com / http://www.waveshare.net
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documnetation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to  whom the Software is
* furished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS OR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*/
#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3); // RX, TX

void SendMessage(void);
void setup()
{
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  
  // wait for serial port to connect. Needed for native USB port only
  while (!Serial);

  // set the data rate for the SoftwareSerial port
  mySerial.begin(9600);

  delay(2000);
  SendMessage();
}

void loop() // run over and over
{
   mySerial.listen();
   while(mySerial.available())  
      Serial.write(mySerial.read());

}

void SendMessage(void)//sned message 
{
   mySerial.println("AT");   
  delay(500);
  //Send message
  mySerial.println("AT+CMGF=1");
  delay(500);
  //mySerial.println(  "AT+CSCA=\"+8613800755500\"");//Change the receiver phone number
  //delay(500);
   mySerial.println(  "AT+CMGS=\"18565708640\"");//Change the receiver phone number
  delay(500);
  mySerial.println("waveshare");//the message you want to send
  delay(100);
  mySerial.write(26); 
}
