int brightness = 0;
int led = 9;

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  for (brightness = 0; brightness <= 255; brightness += 5) {
    analogWrite(led, brightness);
    delay(30); 
  }
  for (brightness = 255; brightness >= 0; brightness -= 5) {
    analogWrite(led, brightness);
    delay(30); 
  }
}