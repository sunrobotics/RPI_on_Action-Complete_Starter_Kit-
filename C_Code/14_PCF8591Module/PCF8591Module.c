/***************************************************************
* File name     : PCF8591Module.c
* Description   : Make an led blinking.
* Company       : SunRobotics Technologies
* Website       : www.sunrobotics.co.in
* E-mail        : support@sunrobotics.co.in(For Any Query)
***************************************************************/


#include <wiringPi.h>
#include <pcf8591.h>
#include <stdio.h>

#define Address 0x48
#define BASE 64
#define A0 BASE+0
#define A1 BASE+1
#define A2 BASE+2
#define A3 BASE+3

int main(void)
{
    int value;
    wiringPiSetup();
	printf( "Welcome to PCF8591\n");
	printf( "Raspberry Pi PCF8591 Module test program\n" );
    pcf8591Setup(BASE,Address);

    while(1)
    {   
        value = analogRead(A0);
        printf("Analoge: %d\n",value);
        printf("Analoge: %dmv\n",value*5000/255);
        delay(1000);
    }   
}
