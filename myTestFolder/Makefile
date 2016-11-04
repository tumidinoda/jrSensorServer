DEBUG	= -O3
CC	= g++
INCLUDE	= -I/usr/local/include
CFLAGS	= $(DEBUG) -Wall $(INCLUDE) -Winline -pipe

LDFLAGS	= -L/usr/local/lib
LDLIBS    = -lwiringPi -lwiringPiDev -lpthread -lm

testLEDblink: testLEDblink.cpp 
	$(CC) $(CFLAGS) -o testLEDblink testLEDblink.cpp $(LDFLAGS) $(LDLIBS)
testMotor: testMotor.cpp
	$(CC) $(CFLAGS) -o testMotor testMotor.cpp $(LDFLAGS) $(LDLIBS)
