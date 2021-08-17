
int ledpattern1 = 10;
int ledpattern2 = 11;
int ldrsensor1= A0;
int ldrsensor2= A1;


void setup()
{
Serial.begin(9600);
pinMode(ledpattern1,OUTPUT);
pinMode(ledpattern2,OUTPUT);
pinMode(ldrsensor1,INPUT);
pinMode(ldrsensor2,INPUT);
}


void loop() 
{
  
int value1 = analogRead(ldrsensor1);
delay(1500);
int value2 = analogRead(ldrsensor2);
delay(1500);

Serial.print("Value1 is: ");
Serial.println(value1);
Serial.print("Value2 is: ");
Serial.println(value2);


if(value1 <= 50)
{
  digitalWrite(ledpattern1,LOW);
}
else
{
  digitalWrite(ledpattern1,LOW);
}


if(value2 >= 75)
{
  digitalWrite(ledpattern2,LOW);
}
else
{
  digitalWrite(ledpattern2,LOW);
}
}
