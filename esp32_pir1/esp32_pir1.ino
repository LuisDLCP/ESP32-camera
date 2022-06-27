int pin = 4;
 
void setup()
{
  pinMode(pin,INPUT);
 
  Serial.begin(115200);
}
 
void loop()
{
 
  bool isDetected = digitalRead(pin);
 
  if(isDetected){
    Serial.println("Presence detected");
  }
  else{
    Serial.println("Presence has stopped!");
  }
 
  delay(1000);
}
