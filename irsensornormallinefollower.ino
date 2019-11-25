
int t1=A0;
int t2=A2;
void setup() 
{
pinMode(pin5,OUTPUT);  
pinMode(pin6,OUTPUT);  
pinMode(pin7,OUTPUT);
pinMode(pin8,OUTPUT);
Serial.begin(9600);
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
