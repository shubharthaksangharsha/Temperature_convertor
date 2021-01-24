#include<stdio.h>
void main()
{
   int cel, fah, upper, lower,change;
   upper = 300, lower = 0, change=20;
   fah = lower;
   
   
   
   while(fah<=upper)
   {
     cel = 5 * ( fah - 32 ) / 9 ;
     printf("Temperature in Fahernite: %d \t \t" , fah);
     printf("Temperature in Celsius : %d \n", cel);
     fah =  fah + change;
   
   }
}

