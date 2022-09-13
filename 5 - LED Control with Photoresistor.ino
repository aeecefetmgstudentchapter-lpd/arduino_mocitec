
int sensorReading = 0;
int led = 9;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop()
{

  sensorReading = analogRead(A0);

  Serial.println(sensorReading);
  
  
  if(sensorReading > 200){
  digitalWrite(led, LOW);
  }
 
  if(sensorReading < 200){
  digitalWrite(led, HIGH);
  }
 
}