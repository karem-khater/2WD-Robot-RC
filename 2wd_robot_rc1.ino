void setup()
{
  for(int i=1;i<=6;i++){pinMode(i,OUTPUT);}
  Serial.begin(9600);
  Serial.println("enter'f','b','r','l'or other to");
  Serial.println(" move forward,backward,right,left,and stop");
}

void loop()
{
  if(Serial.available()>0){char reading=Serial.read();
  switch(reading){
  case'f':analogWrite(5,255);analogWrite(6,255);
  digitalWrite(1,1);digitalWrite(2,0);
  digitalWrite(3,1);digitalWrite(4,0);break;
  case'b':analogWrite(5,255);analogWrite(6,255);
  digitalWrite(1,0);digitalWrite(2,1);
  digitalWrite(3,0);digitalWrite(4,1);break;
  case'r':analogWrite(5,0);analogWrite(6,255);
  digitalWrite(1,1);digitalWrite(2,0);
  digitalWrite(3,0);digitalWrite(4,0);break;
  case'l':analogWrite(5,255);analogWrite(6,0);
  digitalWrite(1,0);digitalWrite(2,0);
  digitalWrite(3,1);digitalWrite(4,0);break;
  default:analogWrite(5,0);analogWrite(6,0);
  digitalWrite(1,0);digitalWrite(2,0);
  digitalWrite(3,0);digitalWrite(4,0);
  }
                           delay(100);
}
}