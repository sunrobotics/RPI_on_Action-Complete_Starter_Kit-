/***************************************************************
* File name     : IRremotecontrolexperiment.c
* Company       : SunRobotics Technologies
* Website       : www.sunrobotics.co.in
* E-mail        : support@sunrobotics.co.in(For Any Query)
***************************************************************/


#include <wiringPi.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <lirc/lirc_client.h>
#include <time.h>

int main(void)
{
  printf( "Welcome to IR remote...\n");
  printf( "Raspberry Pi IR remote program...\n" );
  printf( "Press Ctrl+C to exit\n..." );
  
  struct lirc_config *config;
  int buttonTimer = millis();
  char *code;
  if(wiringPiSetup() == -1){
    printf("setup wiringPi failed !");
    return 1;
  }

  if(lirc_init("lirc",1)==-1)
    exit(EXIT_FAILURE);

  if(lirc_readconfig(NULL,&config,NULL)==0){
    while(lirc_nextcode(&code)==0){
      if(code==NULL) continue;{
        if (millis() - buttonTimer > 400){
          printf("the code=%s\n",code);
        }
      }
      free(code);
    }
    lirc_freeconfig(config);
  }
  lirc_deinit();
  exit(EXIT_SUCCESS);
  return 0;
}

