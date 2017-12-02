char Data[8]={0,0,0,0,0,0,0,0};
void setup(){
  SetupCANBuss();
}

void loop(){

  for(int i=60;i<125;i+=10){
    Data[0]=i;
    setSendId(10);
    setData(Data);
    SendData();
    Serial.print("Sent:");
    printdata();
    Serial.println();
    delay(3000);
    
  }
  
   
}


