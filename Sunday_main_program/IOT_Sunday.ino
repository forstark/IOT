const int picMic = A0;

void setup(void)
{
  Serial.begin(1000000);

  delay(1000);
  Serial.println("Start");
}

void loop(void)
{
  Serial.println(analogRead(picMic));
}
