# 1st-year-mini-project
> A simple arduino Based Fire alram system with DC motor pump

> Arduino Uno is an open-source microcontroller board developed by Arduino.cc. It has several advantages over the conventional microcontrollers. It comes with a pre-tested software and hardware libraries and has its own integrated development environment (IDE). 

## Components Required  
* Arduino Uno Board 
* USB Cable 
* LM 34 (Temperature sensor)
* 5v Relay module
* DC motor pump 
* Buzzzer
* LED

## Circuit Diagram

![img1](https://github.com/basheerbk/1st-year-mini-project/blob/main/project_bb.jpg)
![img2](https://github.com/basheerbk/1st-year-mini-project/blob/main/project_sche.jpg)

## Code

```

int lmPin = A0; 
int ledPin = 10;
int relayPin = 8;

void setup()
{
pinMode(lmPin, INPUT);
pinMode(relayPin, OUTPUT);
pinMode(ledPin,  OUTPUT);  
Serial.begin(9600);
}
void loop()
{
int val;
val=analogRead(0);

if (val >= 63)
{
  delay(500);
  digitalWrite(ledPin, HIGH);
  delay(3000); 
  digitalWrite(relayPin, LOW);
}
else
{  
  digitalWrite(relayPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
}

Serial.print("Value =   ");
Serial.println(val);// output and display value of val

delay(1000);// wait for 1 second
}

```
