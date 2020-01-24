/***************************************************************
* File name     : InterfacingwithButton.c
* Description   : Make an button.
* Company       : SunRobotics Technologies
* Website       : www.sunrobotics.co.in
* E-mail        : support@sunrobotics.co.in(For Any Query)
***************************************************************/
#include <wiringPi.h>
#include <stdio.h>
#define button 0
int val;
int main(void)
{
  printf( "Welcome to SunRobotics\n");
  printf( "Raspberry button_test program\n" );
  printf( "Press Ctrl+C to exit\n" );
  wiringPiSetup();
  pinMode (button, INPUT) ; 
  while(1)
  {
    val=digitalRead(button);
    if(val==HIGH)
    {  
      delay(100);   
      if(val==HIGH)
      printf( "button on\n");
    }
    else 
    {
      printf( "button off\n");
    }
    delay(200);
  }
}
