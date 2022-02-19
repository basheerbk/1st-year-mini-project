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
