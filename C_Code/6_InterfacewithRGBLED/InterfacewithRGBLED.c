/***************************************************************
* File name     : InterfacewithRGBLED.c
* Description   : Make an led blinking.
* Company       : SunRobotics Technologies
* Website       : www.sunrobotics.co.in
* E-mail        : support@sunrobotics.co.in(For Any Query)
***************************************************************/
#include <wiringPi.h>
#include <stdio.h>
#define Rled 0
#define Gled 2
#define Bled 3
int main(void)
{
  printf( "Welcome to RGBLed\n");
  printf( "Raspberry Pi RGBled test program\n" );
  printf( "Press Ctrl+C to exit\n" );
  wiringPiSetup() ;
  pinMode (Rled,OUTPUT);
  pinMode (Gled,OUTPUT);
  pinMode (Bled,OUTPUT); 
  while(1)
  {
   digitalWrite(Rled,LOW);
   digitalWrite(Gled,HIGH);
   digitalWrite(Bled,HIGH); 
   delay(1000);
   digitalWrite(Rled,HIGH);
   digitalWrite(Gled,LOW);
   digitalWrite(Bled,HIGH); 
   delay(1000);
   digitalWrite(Rled,HIGH);
   digitalWrite(Gled,HIGH);
   digitalWrite(Bled,LOW); 
   delay(1000);
   digitalWrite(Rled,LOW);
   digitalWrite(Gled,LOW);
   digitalWrite(Bled,HIGH); 
   delay(1000);
   digitalWrite(Rled,LOW);
   digitalWrite(Gled,HIGH);
   digitalWrite(Bled,LOW); 
   delay(1000);
   digitalWrite(Rled,HIGH);
   digitalWrite(Gled,LOW);
   digitalWrite(Bled,LOW); 
   delay(1000);
  }
}
