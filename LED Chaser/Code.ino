void setup()
{
for(int i=1;i<=4;i++)
{
pinMode(i,OUTPUT);
}
}

void loop()
{
for(int i=1;i<=4;i++);
{
digitalWrite(i,HIGH);
digitalWrite(i+1,HIGH);
digitalWrite(i-3,HIGH);
delay(1000);
digitalWrite(i,LOW);
digitalWrite(i+1,LOW);
digitalWrite(i-3,LOW);
delay(1000);
}
}
