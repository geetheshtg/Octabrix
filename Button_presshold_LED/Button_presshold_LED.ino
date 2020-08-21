void setup() {
  // put your setup code here, to run once:
pinMode(4,INPUT);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(4)==1)
{
digitalWrite(13,HIGH);
delay(1000);  
}
digitalWrite(13,LOW);

}
