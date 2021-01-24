// using for loop and printing in reverse order i.e from 300 to 0.
#include<stdio.h>
void main()
{
  float fah,cel;
  for(fah = 300 ; fah >= 0 ; fah--)
  {
  cel = 5.0/9.0 * ( fah - 32 )  ;
     printf("Temperature in Fahernite: %3.1f \t \t" , fah);
     printf("Temperature in Celsius : %4.1f \n", cel);
  
  
  }
   
   
  
}

