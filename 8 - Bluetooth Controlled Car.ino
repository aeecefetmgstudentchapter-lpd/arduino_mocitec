//library

#include <SoftwareSerial.h> //Serial commands

//bluetoothh ports
SoftwareSerial bluetooth(10, 11); //  TX,RX

//ports
int IN1 = 4;
int IN2 = 5;
int IN3 = 6;
int IN4 = 7;

//bluetooth 
char readBluetooth;

void setup(){
  
    // Transmission rate bluetooth module
    
    bluetooth.begin(9600);  
    
    //Output ports
    
    //motors
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);
  
}

void loop(){ 
         
  while (bluetooth.available()) {
      
      readBluetooth = bluetooth.read();
  
            if(readBluetooth == 'B'){               
               back();
                
            }
            
            if(readBluetooth == 'F'){         
              front();
            }
      
            if(readBluetooth == 'R'){  
               right();              
            }

            if(readBluetooth == 'L'){  
               left();                                                 
            }

            if(readBluetooth == 'S'){   
               sstop();           
            }
    }
      
}

      void back(){
              digitalWrite(IN1, HIGH); 
              digitalWrite(IN2, LOW);
              digitalWrite(IN3, HIGH); 
              digitalWrite(IN4, LOW);
       }

       void front(){
              digitalWrite(IN1, LOW);
              digitalWrite(IN2, HIGH);
              digitalWrite(IN3, LOW);
              digitalWrite(IN4, HIGH); 
       }

       void left(){ 
              digitalWrite(IN3, LOW); 
              digitalWrite(IN4, HIGH); 
       }

       void right(){  
              digitalWrite(IN1, LOW); 
              digitalWrite(IN2, HIGH);
       }

       void sstop(){ 
              digitalWrite(IN1, LOW); 
              digitalWrite(IN2, LOW);
              digitalWrite(IN3, LOW); 
              digitalWrite(IN4, LOW);  
       }
