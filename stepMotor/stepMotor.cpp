#include <iostream>
#include <wiringPi.h>
#include "stepMotor.h"
using namespace std;

//================================================================================================================================================
stepMotor::stepMotor(int pinA,int pinB,int pinC,int pinD,int stepDelay)
{
	this->pinA=pinA;
	this->pinB=pinB;
	this->pinC=pinC;
	this->pinD=pinD;
	this->stepDelay=stepDelay;
	
	// Initialze wiringPi, setting pinA to pinD to output mode
	if (!ifGPIOinit) {
		wiringPiSetup ();
		ifGPIOinit=true;
	}
	pinMode(pinA, OUTPUT);
	pinMode(pinB, OUTPUT);	
	pinMode(pinC, OUTPUT);	
	pinMode(pinD, OUTPUT);	
}
//================================================================================================================================================
bool stepMotor::ifGPIOinit=false;
//================================================================================================================================================
void stepMotor::stepForward(int steps)
{
	for (int i=0;i<steps;++i) {
		// impulse on pinA
		digitalWrite(pinA,HIGH); delay(stepDelay);
		digitalWrite(pinA,LOW); delay(stepDelay);
		// impulse on pinB
		digitalWrite(pinB,HIGH); delay(stepDelay);
		digitalWrite(pinB,LOW); delay(stepDelay);
		// impulse on pinC
		digitalWrite(pinC,HIGH); delay(stepDelay);
		digitalWrite(pinC,LOW); delay(stepDelay);
		// impulse on pinC
		digitalWrite(pinA,HIGH); delay(stepDelay);
		digitalWrite(pinA,LOW); delay(stepDelay);
	}	
}
//================================================================================================================================================
void stepMotor::stepBackward(int steps)
{
	
	
}
//================================================================================================================================================
void stepMotor::rotate(int rounds)
{
	
	
}