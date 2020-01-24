/***************************************************************
* File name     : Relaymodule.c
* Description   : Make an Relay
* Company       : SunRobotics Technologies
* Website       : www.sunrobotics.co.in
* E-mail        : support@sunrobotics.co.in(For Any Query)
***************************************************************/
#include <wiringPi.h>
#include <stdio.h>
#define relay 0
char key;
int main(void)
{
  printf( "Welcome to Relay\n");
  printf( "Raspberry relay_test program\n" );
  printf( "Press Ctrl+C to exit\n" );
  wiringPiSetup();
  pinMode (relay, OUTPUT) ; 
  while(1)
  {
	printf( "Input 0 1 \n");
	key=getchar();
	if(key=='1')
	{
		digitalWrite(relay,HIGH);
	}
	else if(key=='0')
	{
		digitalWrite(relay,LOW);
	}
  }
}

