int i=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  Serial.begin(115200);
  

}

void loop() {
  // put your main code here, to run repeatedly:
 Serial.println(analogRead(A0));
 delay(300);

}
