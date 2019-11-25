#include <NewPing.h>
#define TRIGGER_PIN 13
#define ECHO_PIN 12
#define MAX_DISTANCE 200
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
void setup() {
pinMode(pin5,OUTPUT);  
pinMode(pin6,OUTPUT);  
pinMode(pin7,OUTPUT);
pinMode(pin8,OUTPUT);
Serial.begin(9600);
Serial.print("+++");  // Enter xbee AT command mode, NB no carriage return here
delay(1500);          // Guard time
Serial.println("ATID 3333, CH C, CN");
}
void loop() {
if(flag==0)
{
 if (Serial.available() > 0)
{
 char s = Serial.read();
  switch (s) {
        case 'G':
      {
        flag=1;
         }
}
}
}
void normalLineFollow()
{
int r1=digitalRead(t1);
int r2=digitalRead(t2);
if(r1==LOW&&r2==LOW)
{
  digitalWrite(pin5,HIGH);
  digitalWrite(pin6,LOW);
  digitalWrite(pin7,HIGH);
  digitalWrite(pin8,LOW);
  
}
 if(r1==HIGH&&r2==LOW)
{
  digitalWrite(pin5,LOW);
  digitalWrite(pin6,HIGH);
  digitalWrite(pin7,HIGH);
  digitalWrite(pin8,LOW);
  
} if(r1==LOW&&r2==HIGH)
{
  digitalWrite(pin5,HIGH);
  digitalWrite(pin6,LOW);
  digitalWrite(pin7,LOW);
  digitalWrite(pin8,HIGH);
 }
 if(r1==HIGH&&r2==HIGH)
{
  digitalWrite(pin5,HIGH);
  digitalWrite(pin6,LOW);
  digitalWrite(pin7,HIGH);
  digitalWrite(pin8,LOW);
  
}
}
void detectObstacle()
{
delay(50);
unsigned int uS = sonar.ping_cm();
unsigned int distanceCm;
pinMode(ECHO_PIN,OUTPUT);
digitalWrite(ECHO_PIN,LOW);
pinMode(ECHO_PIN,INPUT);

//Serial.print("Ping: ");
//Serial.print(distanceCm);
//Serial.println("cm");
if((distanceCm<15) && (distanceCm>0))     
{
stopBuggy();
delay(1000);
}
}
