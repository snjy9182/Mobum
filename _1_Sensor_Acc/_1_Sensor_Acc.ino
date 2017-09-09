
#include <MMA7660.h>
#include <Wire.h>
#include "MMA7660.h"
MMA7660 accelemeter;


void setup()
{
	accelemeter1.init();
  //accelemeter2.init();  
  //accelemeter3.init();  
	Serial.begin(9600);
  int n = 0;

}
void loop()
{
	int8_t x;
	int8_t y;
	int8_t z;
	float ax,ay,az;
  
	accelemeter.getXYZ(&x,&y,&z);
	accelemeter.getAcceleration(&ax,&ay,&az);

  Serial.println("Sensor " + (n + 1) + ":");
	Serial.println(ax);
	Serial.println(ay);
	Serial.println(az);
	
	Serial.println("*************");

  n = n + 1;




	delay(5000);
}


