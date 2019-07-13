#include <Wire.h>
#include <TDA7719.h>
  TDA7719 tda;

void setup(){ 
  Serial.begin(9600);Wire.begin();
}

void loop(){
  audio();
  delay(1000);
}

void audio(){
tda.setInput(2,1,1,7); 
tda.setInput_2(2,1,1,1,1,1);  
tda.setMix_source(7,0); 
tda.setMix_cont(1,1,1,1,1,1,1,1);
tda.setMute(1,0,0,1,1,1,1); 
tda.setSoft_1(1,1,1,1,1,1,1,1);
tda.setSoft_2(1,1,1,1,0,3); 
tda.setLoudness(0,0,1,1);  
tda.setVol(0,1,1);
tda.setTreble(0,3,1);
tda.setMiddle(0,3,1); 
tda.setBass(0,3,1); 
tda.setSMB(0,1,0,0,1); 
tda.setVol_LF(0,1); 
tda.setVol_RF(0,1);
tda.setVol_LR(0,1);
tda.setVol_RR(0,1);
tda.setVol_SUB_L(0,1); 
tda.setVol_SUB_R(0,1);
tda.setTest1(0,14,1,1);
tda.setTest2(0,1,1,3);
}
