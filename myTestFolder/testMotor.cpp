#include <wiringPi.h>
int main (void)
{
  // Schrittmotor Test	 
  wiringPiSetup () ;
  // Pin 0 bis 8 auf Output setzen
  for (int i=0;i<8;++i)
  {
	int pin=i; 
    pinMode (pin, OUTPUT);
  }
  

  // Zu Testzwecken lass LEDs am MotorShield blinken
  for (int i=0;i<8;++i)
  {
	int pin=i;  
    digitalWrite (pin, HIGH) ; delay (500);
    digitalWrite (pin,  LOW) ; delay (500);
  }
  return 0 ;
}