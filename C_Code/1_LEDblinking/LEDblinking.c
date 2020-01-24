/***************************************************************
* File name     : LEDblinking.c
* Description   : Make an led blinking.
* Company       : SunRobotics Technologies
* Website       : www.sunrobotics.co.in
* E-mail        : support@sunrobotics.co.in(For Any Query)
***************************************************************/


#include <wiringPi.h>
#include <stdio.h>
#define led_pin 0

int main(void){

  printf( "Welcome to SunRobotics...\n");
  printf( "Raspberry Pi blink program...\n" );
  printf( "Press Ctrl+C to exit\n..." );
  wiringPiSetup();
  pinMode(led_pin,OUTPUT); 
  while(1){
    digitalWrite(led_pin,HIGH);
    delay (1000);
    digitalWrite(led_pin,  LOW);
    delay (1000);
  }
}

