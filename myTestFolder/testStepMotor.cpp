#include <iostream>
#include "../stepMotor/stepMotor.h"
using namespace std;
int main (void)
{
	// Schrittmotor Test Motoren erzeugen/initialisieren
	cout << "Erzeuge Motor 1" << endl;  
	stepMotor myStepMotorA;
	stepMotor myStepMotorB(4,5,6,7);
  
  	// Schrittmotor Test step forward
	cout << "Motor A: 500 Schritte vorwärts" << endl;  
	myStepMotorA.stepForward(499); 	myStepMotorA.stepForward();
 
	cout << "Motor B: 100 Schritte vorwärts" << endl;  
	myStepMotorB.stepForward(100); 
 
  cout << "Testende" << endl;
  return 0 ;
  
}
