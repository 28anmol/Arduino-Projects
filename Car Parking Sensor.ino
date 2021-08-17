int redled = 2;
int yellowled = 3;
int greenled = 4;
int whiteled1 = 5;
int whiteled2 = 7;
int trigo = 12;                   // Assigning  the pin numbers on Arduino UNO to the respective pins present on the ultrasonic sensor.
int echo = 9;
int duration;                     // All of these variables are termed as global variables.
int distance;
int buzzer = 10;
void setup()  
{
Serial.begin(9600);               //To begin the serial port communication.
pinMode(echo,INPUT);
pinMode(trigo,OUTPUT);
pinMode(redled,OUTPUT);
pinMode(yellowled,OUTPUT);
pinMode(greenled,OUTPUT);
pinMode(whiteled1,OUTPUT);
pinMode(whiteled2,OUTPUT);
pinMode(buzzer,OUTPUT);
} 
void loop()
{
digitalWrite(trigo,LOW);
delay(10);
digitalWrite(trigo,HIGH);
delay(50);
digitalWrite(trigo,LOW);
duration = pulseIn(echo,HIGH);   //This gives us duration in microseconds.
distance = duration/60.6;        // Distance is being measured in centimetres.
Serial.print("The distance is: ");
Serial.println(distance);        // Displays the distance of the object from the sensor on serial monitor in centimeteres.
Serial.print(" cm.");
delay(100);                      //This function assigns values in milliseconds.
if(distance >= 0 && distance <= 20)
{
  digitalWrite(redled,HIGH);
  digitalWrite(yellowled,LOW);
  digitalWrite(greenled,LOW);
  digitalWrite(whiteled1,LOW);
  digitalWrite(whiteled2,LOW);
  tone(buzzer, 329.6); // Send 1KHz sound signal...
}
else if(distance > 20 && distance<=40)
{
  digitalWrite(redled,LOW);
  digitalWrite(yellowled,HIGH);
  digitalWrite(greenled,LOW);
  digitalWrite(whiteled1,LOW);
  digitalWrite(whiteled2,LOW);
  tone(buzzer, 246.6);
} 
else if(distance>40 && distance<=60)
{
 digitalWrite(redled,LOW);
  digitalWrite(yellowled,LOW);
  digitalWrite(greenled,HIGH);
  digitalWrite(whiteled1,LOW);
  digitalWrite(whiteled2,LOW);
  tone(buzzer, 196); 
}
else if(distance>60 && distance<=80)
{
  digitalWrite(redled,LOW);
  digitalWrite(yellowled,LOW);
  digitalWrite(greenled,LOW);
  digitalWrite(whiteled1,HIGH);
  digitalWrite(whiteled2,LOW);
  tone(buzzer, 146.8);
}
else if(distance>80 && distance<=100)
{
 digitalWrite(redled,LOW);
  digitalWrite(yellowled,LOW);
  digitalWrite(greenled,LOW);
  digitalWrite(whiteled1,LOW);
  digitalWrite(whiteled2,HIGH);
 tone(buzzer, 110); 

}
else
  {
    noTone(buzzer);
  digitalWrite(redled,LOW);
  digitalWrite(yellowled,LOW);
  digitalWrite(greenled,LOW);
  digitalWrite(whiteled1,LOW);
  digitalWrite(whiteled2,LOW);
}
}
