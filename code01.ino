#include <VarSpeedServo.h>
VarSpeedServo sv1;
VarSpeedServo sv2;//Left right
VarSpeedServo sv3;
VarSpeedServo sv4;
int svd1 = sv1.read();
int svd2 = sv2.read();
int svd3 = sv3.read();
int svd4 = sv4.read();
int sp1 = 10;
int sp2 = 5;
int sp3 = 12;
void setup() {
  Serial.begin(9600);
  sv4.attach(11); //updown
  sv3.attach(10);//forword blackword
  sv2.attach(9);//Left right
  sv1.attach(8); //gripper
}
void loop() {
  sv2.write(80, sp3);//Left right
  sv2.wait();
  sv4.write(180, sp1); //updown
  sv4.wait();
  sv3.write(70, sp1);//forword blackword
  sv3.wait();
  sv4.write(140, sp1); //updown
  sv4.wait();
  sv1.write(0, sp1);//forword blackword 
  sv1.wait();
  sv3.write(140, sp1);//forword blackword 
 
  sv3.wait();
  
 sv1.write(180, sp3);//forword blackword
 
  sv1.wait();
   sv4.write(180, sp1); //updown
  sv4.wait();
  sv3.write(70, sp1);//forword blackword
  sv3.wait();
  sv2.write(180, sp3);//Left right
  sv2.wait();
  
   sv3.write(140, sp1);//forword blackword
  sv3.wait();
   sv4.write(140, sp1); //updown
  sv4.wait();
    sv1.write(0, sp3);//forword blackword 
  sv1.wait();
  sv2.write(180, sp3);//Left right
  sv2.wait();
  sv3.write(90, sp1);//forword blackword
  sv3.wait();
  sv2.write(80, sp3);//Left right
  sv2.wait();
  sv4.write(180, sp1); //updown
  sv4.wait();
  sv3.write(70, sp1);//forword blackword
  sv3.wait();
  sv4.write(140, sp1); //updown
  sv4.wait();
  sv1.write(0, sp1);//forword blackword 
  sv1.wait();
  sv3.write(140, sp1);//forword blackword 
 
  sv3.wait();
  
 sv1.write(180, sp3);//forword blackword
 
  sv1.wait();
   sv4.write(180, sp1); //updown
  sv4.wait();
  sv3.write(70, sp1);//forword blackword
  sv3.wait();
  sv2.write(0, sp3);//Left right
  sv2.wait();
}
