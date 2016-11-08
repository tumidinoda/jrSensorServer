#include <iostream>
using namespace std;
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
    cout << "Pin: " << i << endl;
    digitalWrite (pin, HIGH) ; delay (500);
    digitalWrite (pin,  LOW) ; delay (500);
  }
  
  // Zu Testzwecken eine ganze Umdrehung (single step Sequenz)
  for (int i=0;i<2038/4;++i)
  {
	  // Single Step Sequenz: Pin0->Pin1->Pin2->Pin3
	  for (int j=0;j<4;++j) {
		  int pin=j;
                  //cout << "Schleife: " << i << " Pin: " << j << endl;
		  digitalWrite(pin,HIGH);
		  digitalWrite(pin+4,HIGH); delay (15);
		  digitalWrite(pin,LOW);
		  digitalWrite(pin+4,LOW); delay(15);
	  }
  }
  cout << "Testende" << endl;
  return 0 ;
}
