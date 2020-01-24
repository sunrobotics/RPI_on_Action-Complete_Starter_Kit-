/***************************************************************
* File name     : Buzzer.c
* Description   : Make an Buzzer.
* Company       : SunRobotics Technologies
* Website       : www.sunrobotics.co.in
* E-mail        : support@sunrobotics.co.in(For Any Query)
***************************************************************/
#include <wiringPi.h>
#include <stdio.h>
#define buzzer 0
int main(void)
{
  printf( "Welcome to Buzzer\n");
  printf( "Raspberry Pi buzzer test program\n" );
  printf( "Press Ctrl+C to exit\n" );
  wiringPiSetup() ;
  pinMode (buzzer, OUTPUT) ; 
  while(1)
  {
   digitalWrite(buzzer,HIGH);
   delay(1000);
   digitalWrite(buzzer,LOW);
   delay(1000);
  }
}
