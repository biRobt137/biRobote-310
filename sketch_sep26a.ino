void setup() 
{
   Serial.begin(115200); 
}
void loop()
{
  if (Serial.available() > 0)
  {
    String messageFromRPi = Serial . readStringUntil("\n");
  }
  if ( massageFromRPi == " pass green")
  {
    passleft();
  }
}
void passleft()
{
  // Serial . print In ("karshat");
}
