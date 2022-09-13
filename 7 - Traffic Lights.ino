int green_led = 10;
int yellow_led = 9; 
int red_led = 8;

void setup() {
  pinMode(green_led,OUTPUT);     
  pinMode(yellow_led,OUTPUT);     
  pinMode(red_led,OUTPUT);    
}

void loop() {
  
  digitalWrite(green_led,HIGH);  
  delay(4000);           
  digitalWrite(green_led,LOW);   
   
  
  digitalWrite(yellow_led,HIGH);  
  delay(2000);           
  digitalWrite(yellow_led,LOW);   
   
  
  digitalWrite(red_led,HIGH); 
  delay(4000);           
  digitalWrite(red_led,LOW);  
}