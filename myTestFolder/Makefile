DEBUG	= -O3
CC	= g++
INCLUDE	= -I/usr/local/include -I../wiringPi/wiringPi
CFLAGS	= $(DEBUG) -Wall $(INCLUDE) -Winline -pipe

LDFLAGS	= -L/usr/local/lib
LDLIBS    = -lwiringPi -lwiringPiDev -lpthread -lm

testLEDblink: testLEDblink.cpp 
	$(CC) $(CFLAGS) -o testLEDblink testLEDblink.cpp $(LDFLAGS) $(LDLIBS)
testMotor: testMotor.cpp
	$(CC) $(CFLAGS) -o testMotor testMotor.cpp $(LDFLAGS) $(LDLIBS)
testStepMotor: testStepMotor.cpp ../stepMotor/stepMotor.h ../stepMotor/stepMotor.cpp
	$(CC) $(CFLAGS) -o testStepMotor  ../stepMotor/stepMotor.cpp testStepMotor.cpp $(LDFLAGS) $(LDLIBS)	

