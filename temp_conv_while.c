#include<stdio.h>
void main()
{
   float cel, fah, upper, lower,change;
   upper = 300, lower = 0, change=20;
   fah = lower;
   
   
   
   while(fah<=upper)
   {
     cel = 5.0/9.0 * ( fah - 32 )  ;
     printf("Temperature in Fahernite: %3.1f \t \t" , fah);
     printf("Temperature in Celsius : %4.1f \n", cel);
     fah =  fah + change;
   
   }
}

