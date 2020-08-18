int incomingByte = 0; 
void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(115200);
}

void loop() {
  incomingByte = Serial.read();
  if(incomingByte=='0')
  {
    digitalWrite(13,LOW);
  }
  else if(incomingByte=='1')
  {
    digitalWrite(13,HIGH);
  }
}  
