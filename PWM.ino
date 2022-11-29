int ledPin=6;
int brightness=255;
int dt=1000;

void setup()
{
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  analogWrite(ledPin, brightness);
  delay(dt); 
  
  analogWrite(ledPin, brightness/2);
  delay(dt);

  analogWrite(ledPin, brightness/4);
  delay(dt);
  
  analogWrite(ledPin,0);
  delay(dt); 
}
