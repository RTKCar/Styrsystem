#include <Servo.h> 
Servo SteeringServo;
int message[8];
int recievedId;


void setup(){
  SteeringServo.attach(9);
  SetupCANBuss();
  Turn(100);
  Serial.println("100 degrees");
  delay(3000);
}

void loop(){
  if(messageAvalible()){
   getMessage(message);
   recievedId=getRecievedId();
   Serial.print("ID: ");
   Serial.println(recievedId);
   for(int i=0;i<8;i++){
    Serial.print(message[i]);
    Serial.print(":");
    }
     Serial.println();
     if(recievedId==10){
      Turn(message[0]);
      }
    } 
   
}





void Turn(int degree){
    
    SteeringServo.write(degree);
    Serial.print("Turned to: ");
    Serial.print(degree);
    Serial.println(" degrees");

  }
 
