
#include <RH_ASK.h>   // Include the RH_ASK library
#include <SPI.h>      // Not actually used but needed to compile the RH_ASK library
 
RH_ASK radio(2000, 11, 12);
#define ARRAYSIZE 5
String results[ARRAYSIZE] = { "5C0029375614", "5C0029373577", "5C0029374002","5C0029406B5E","5C00293FD892" };
String tag[ARRAYSIZE] = { " RIGHT CURVE AHEAD!", "LEFT CURVE AHEAD!", "PEDESTRIAN CROSSING!"," SPEED LIMIT 40KMPH"," UNIDENTIFIED TAG" };

 
void setup()
{
    Serial.begin(9600);   // Use this for debugging
 
    // Speed of 2000 bits per second
    // Use pin 11 for reception
    // Use pin 12 for transmission
    
    if (!radio.init())
    {
         Serial.println("Radio module failed to initialize");
    }
 Serial.println("TAG ID in Proximity");
  while (Serial.available() == 0) {
  }
}

char commandChar;
String serialReceived;

void loop() {
 

serialReceived = Serial.readStringUntil('\n');
commandChar = serialReceived.charAt(0);

  switch (commandChar) {
    case 'a':
    {
     // Create our message
    const char *msg = "___RIGHT CURVE AHEAD!________";
 
    // Send our message
    radio.send((uint8_t*)msg, strlen(msg));
 
    // Wait until the data has been sent
    radio.waitPacketSent();
 
    // Delay since we dont want to send a trillion packets 
    delay(1000);
 
    // Also inform the serial port that we are done!
     Serial.println("Data Sent Successfully");
      break;
  }
    case 'b':
  {
      // Create our message
    const char *msg = "___LEFT CURVE AHEAD!_________";
 
    // Send our message
    radio.send((uint8_t*)msg, strlen(msg));
 
    // Wait until the data has been sent
    radio.waitPacketSent();
 
    // Delay since we dont want to send a trillion packets 
    delay(1000);
 
    // Also inform the serial port that we are done!
     Serial.println("Data Sent Successfully");
      break;
  }
    case 'c':
 
      {
      // Create our message
    const char *msg = "__PEDESTRIAN CROSSING!_____";
 
    // Send our message
    radio.send((uint8_t*)msg, strlen(msg));
 
    // Wait until the data has been sent
    radio.waitPacketSent();
 
    // Delay since we dont want to send a trillion packets 
    delay(1000);
 
    // Also inform the serial port that we are done!
    Serial.println("Data Sent Successfully");
      break;
  }
     case 'd':
      
      {
      // Create our message
    const char *msg = "__SPEED LIMIT 40KMPH_____";
 
    // Send our message
    radio.send((uint8_t*)msg, strlen(msg));
 
    // Wait until the data has been sent
    radio.waitPacketSent();
 
    // Delay since we dont want to send a trillion packets 
    delay(1000);
 
    // Also inform the serial port that we are done!
     Serial.println("Data Sent Successfully");
  }
    case 'e':
      
      {
      // Create our message
    const char *msg = "__UNIDENTIFIED TAG________";
 
    // Send our message
    radio.send((uint8_t*)msg, strlen(msg));
 
    // Wait until the data has been sent
    radio.waitPacketSent();
 
    // Delay since we dont want to send a trillion packets 
    delay(1000);
 
    // Also inform the serial port that we are done!
 Serial.println("Data Sent Successfully");
      break;
      }
  case 'f':
      
      {
      // Create our message
    const char *msg = "____NO ENTRY________________";
 
    // Send our message
    radio.send((uint8_t*)msg, strlen(msg));
 
    // Wait until the data has been sent
    radio.waitPacketSent();
 
    // Delay since we dont want to send a trillion packets 
    delay(1000);
 
    // Also inform the serial port that we are done!
     Serial.println("Data Sent Successfully");
      break;
      }
      case 'g':
      
      {
      // Create our message
    const char *msg = "_____NO U-TURN___________";
 
    // Send our message
    radio.send((uint8_t*)msg, strlen(msg));
 
    // Wait until the data has been sent
    radio.waitPacketSent();
 
    // Delay since we dont want to send a trillion packets 
    delay(1000);
 
    // Also inform the serial port that we are done!
  Serial.println("Data Sent Successfully");
      break;
      }
      case 'h':
      
      {
      // Create our message
    const char *msg = "____WEIGHT LIMIT: 17T___________";
 
    // Send our message
    radio.send((uint8_t*)msg, strlen(msg));
 
    // Wait until the data has been sent
    radio.waitPacketSent();
 
    // Delay since we dont want to send a trillion packets 
    delay(1000);
 
    // Also inform the serial port that we are done!
  Serial.println("Data Sent Successfully");
      break;
      }
      case 'i':
      
      {
      // Create our message
    const char *msg = "___ONE-WAY TRAFFIC______________";
 
    // Send our message
    radio.send((uint8_t*)msg, strlen(msg));
 
    // Wait until the data has been sent
    radio.waitPacketSent();
 
    // Delay since we dont want to send a trillion packets 
    delay(1000);
 
    // Also inform the serial port that we are done!
   Serial.println("Data Sent Successfully");
      break;
      }
      case 'j':
      
      {
      // Create our message
    const char *msg = "___HORN PROHIBITED______";
 
    // Send our message
    radio.send((uint8_t*)msg, strlen(msg));
 
    // Wait until the data has been sent
    radio.waitPacketSent();
 
    // Delay since we dont want to send a trillion packets 
    delay(1000);
 
    // Also inform the serial port that we are done!
     Serial.println("Data Sent Successfully");
      break;
      }
      case 'k':
      
      {
      // Create our message
    const char *msg = "___BRIDGE AHEAD_________________";
 
    // Send our message
    radio.send((uint8_t*)msg, strlen(msg));
 
    // Wait until the data has been sent
    radio.waitPacketSent();
 
    // Delay since we dont want to send a trillion packets 
    delay(1000);
 
    // Also inform the serial port that we are done!
    Serial.println("Data Sent Successfully");
      break;
      }
  
  
  
  
  
  }
    
}
