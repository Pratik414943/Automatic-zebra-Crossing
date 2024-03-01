#include <Servo.h>
Servo myservo0;
Servo myservo1;
int pos=90;
const int red=11; 
const int yellow=12; 
const int green=13; 
const int motor0=10;
const int motor1=9;
const int motor2=4;
const int motor3=3;
const int ena=8;
const int ena1=2;
const int buzzer=7;
int speed1=100;

void setup()
{
  myservo0.attach(5);
  myservo1.attach(6);
  for(int thisPin = 7; thisPin <= 13; thisPin++)
  {
    pinMode(thisPin,OUTPUT);
  }
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  
}

void loop()
{
  digitalWrite(red,HIGH);
  digitalWrite(buzzer,HIGH);
  digitalWrite(yellow,LOW);
  digitalWrite(green,LOW);
  digitalWrite(motor0,HIGH);
  digitalWrite(motor1,LOW);
  digitalWrite(ena,speed1);
  digitalWrite(motor2,HIGH);
  digitalWrite(motor3,LOW);
  digitalWrite(ena1,speed1);
  servo_motor_close();
  delay(9000);
  
  digitalWrite(red,LOW);
  digitalWrite(buzzer,LOW);
  digitalWrite(yellow,HIGH);
  digitalWrite(green,LOW);
  digitalWrite(motor0,LOW);
  digitalWrite(motor1,LOW);
  digitalWrite(motor2,LOW);
  digitalWrite(motor3,LOW);
  digitalWrite(ena,speed1);
  digitalWrite(ena1,speed1);
  delay(2000);
  
  digitalWrite(red,LOW);
  digitalWrite(buzzer,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(green,HIGH);
  digitalWrite(motor0,LOW);
  digitalWrite(motor1,LOW);
  digitalWrite(ena,speed1);
  digitalWrite(motor2,LOW);
  digitalWrite(motor3,LOW);
  digitalWrite(ena1,speed1);
  servo_motor_open();
  delay(9000);

  
  digitalWrite(red,LOW);
  digitalWrite(yellow,HIGH);
  digitalWrite(green,LOW);
  digitalWrite(motor0,HIGH);
  digitalWrite(motor1,LOW);
  digitalWrite(ena,speed1);
  digitalWrite(motor2,LOW);
  digitalWrite(motor3,LOW);
  digitalWrite(ena1,speed1);
  delay(1000);
}

void servo_motor_open(){
   myservo0.write(90);
    myservo1.write(0);
    delay(10);
  }

void servo_motor_close(){
   myservo0.write(180);
    myservo1.write(90);
    delay(10);
  }
