/*
 * blink.c:
 *      blinks the first LED
 *      Gordon Henderson, projects@drogon.net
 */
 
#include <stdio.h>
#include <wiringPi.h>

#define LED 17
 
int main (void)
{
  printf ("Raspberry Pi blink\n") ;
 
  if (wiringPiSetupGpio () == -1)
    return 1 ;
 
  pinMode (LED, OUTPUT) ;         // aka BCM_GPIO pin 17
 
  while (1)
  {
    printf ("LED on!!");
    digitalWrite (LED, 1) ;       // On
    delay (500) ;                 // mS
    printf ("LED off!!");
    digitalWrite (LED, 0) ;       // Off
    delay (500) ;
  }
  return 0 ;
}
