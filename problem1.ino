void setup(){
  pinMode(3, OUTPUT);
  pinMode(11, INPUT);
}

void loop(){
  digitalWrite(11,HIGH);
  digitalWrite(3,HIGH);
  delay(200);
  digitalWrite(11,HIGH);
  digitalWrite(3,LOW);
  delay(200);
  digitalWrite(11,LOW);
  digitalWrite(3,HIGH);
  delay(200);
  digitalWrite(11,HIGH);
  digitalWrite(3,LOW);
  
}
