#include "servo.h"
#include <iostream>
#include <stdio.h>
//#include <ncurses.h>
//#include <thread>
#include <unistd.h>

using namespace std;
int main () {

	printf ("Testing testing\n");
	//make sure you use the right address values.
	PCA9685 pwm;
	pwm.init(1,0x40);
	usleep(1000 * 100);
	printf ("Setting frequency..");
	pwm.setPWMFreq (61);
	usleep(1000 * 1000);
        while(true){
        for(int i=24;i<=48;i++){
	pwm.setPWM(0,0,i*10);	
	printf ("%d\n",i*10);
	usleep(1000 * 1000);
	}
        for(int i=47;i>24;i--){
	pwm.setPWM(0,0,i*10);	
	printf ("%d\n",i*10);
	usleep(1000 * 1000);
	}
        }	
	return 0;
} 
