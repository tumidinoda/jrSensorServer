#pragma once
#include <iostream>
using namespace std;
/*
	stepMotor class declarition for Raspberry stepper motors via GPIO pins
	using wiringPI (http://wiringpi.com/) moduls
*/

//================================================================================================================================================
class stepMotor {
public:
	stepMotor(int pinA=0,int pinB=1,int pinC=2,int pinD=3,int stepDelay=20);
	void stepForward(int steps=1);
	void stepBackward(int steps=1);
	void rotate(int rounds=1);
private:
	int pinA,pinB,pinC,pinD;
	int stepDelay;

};