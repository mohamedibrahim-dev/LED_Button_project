void setup()
{
  
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
  
}  
  
void loop()
{
  int i=1;
  int d=1000;
  while(i<=10)
  {
    digitalWrite(10,HIGH);
      delay(d);
    digitalWrite(10,LOW);
      delay(d);
   i++;    
  }
   digitalWrite(11,HIGH);
      delay(d);
    digitalWrite(11,LOW);
      delay(d);
       
  
}