#include<stdio.h>
void main()
{
   float cel, fah, upper, lower,change;
   upper = 300, lower = 0, change=20;
   cel = lower;
   
   
   
   while(cel<=upper)
   {
     fah = 9.0/5.0 *  cel + 32.0 ;
     printf("Temperature in Celsius: %3.1f \t \t" , cel);
     printf("Temperature in Farhenite : %4.1f \n", fah);
     cel =  cel + change;
   
   }
}

