/***************************************************************
* File name     : TouchLamp.c
* Description   : Touch Sensor RGB Led blink
* Company       : SunRobotics Technologies
* Website       : www.sunrobotics.co.in
* E-mail        : support@sunrobotics.co.in(For Any Query)
***************************************************************/
#include <wiringPi.h>
#include <stdio.h>
#define touch 1
#define Bled 4
#define Rled 5
#define Gled 6

int count=0;

void swRGB(void)
{
  count++;
  if(count>8){
   count=0;
  }
}
 
void setup() 
{
    pinMode(Bled,OUTPUT);
    pinMode(Rled,OUTPUT);
    pinMode(Gled,OUTPUT);
    digitalWrite(Bled,LOW);
    digitalWrite(Rled,LOW);
    digitalWrite(Gled,LOW);
    wiringPiISR (touch,INT_EDGE_FALLING, &swRGB);
}

void loop() 
{
  switch(count)
  {
    case 1:
    digitalWrite(Bled,HIGH);
    digitalWrite(Rled,HIGH);
    digitalWrite(Gled,HIGH);
    delay(500);
    break;
    case 2:
    digitalWrite(Bled,LOW);
    digitalWrite(Rled,HIGH);
    digitalWrite(Gled,HIGH);
    delay(500);
    break;
    case 3:
    digitalWrite(Bled,HIGH);
    digitalWrite(Rled,LOW);
    digitalWrite(Gled,HIGH);
    delay(500);
    break;
    case 4:
    digitalWrite(Bled,HIGH);
    digitalWrite(Rled,HIGH);
    digitalWrite(Gled,LOW);
    delay(500);
    break;
    case 5:
    digitalWrite(Bled,HIGH);
    digitalWrite(Rled,LOW);
    digitalWrite(Gled,LOW);
    delay(500);
    case 6:
    digitalWrite(Bled,LOW);
    digitalWrite(Rled,HIGH);
    digitalWrite(Gled,LOW);
    delay(500);
    case 7:
    digitalWrite(Bled,LOW);
    digitalWrite(Rled,LOW);
    digitalWrite(Gled,HIGH);
    delay(500);
    case 8:
    digitalWrite(Bled,LOW);
    digitalWrite(Rled,LOW);
    digitalWrite(Gled,LOW);
    delay(500);
    break;
    }
}

int main(void){
  printf( "Welcome to Touch_lamp...\n");
  printf( "Raspberry Pi touch_lamp program...\n" );
  printf( "Press Ctrl+C to exit\n..." );
  wiringPiSetup();
  setup();
  while(1){
	  loop();
  }
}
