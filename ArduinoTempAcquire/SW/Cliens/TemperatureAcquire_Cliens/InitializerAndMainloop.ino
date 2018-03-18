
//volatile char temp1Array[1500];

void InitAfterReset(){
  LM35DZ_Temp_Initialize();
  Serial.begin(9600);
}

void MainLoop(){
  // put your main code here, to run repeatedly:
  
  Serial.println(LM35DZ_Temp_GetCelsius());
  delay(1000);
}

