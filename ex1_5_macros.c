// using macros, for loop and printing in reverse order i.e from 300 to 0.
#include<stdio.h>
#define LOWER 0
#define UPPER 300
#define CHANGE 20
void main()
{
  float fah,cel;
  for(fah = UPPER; fah >= LOWER ; fah =  fah - CHANGE)
  {
  cel = 5.0/9.0 * ( fah - 32 )  ;
     printf("Temperature in Fahernite: %3.1f \t \t" , fah);
     printf("Temperature in Celsius : %4.1f \n", cel);
  
  
  }
   
   
  
}
