#include<stdio.h>
#define YEARS_OLD 12
//#undef YEARS_OLD //to remove the macro defenation 
int main()
{
   #ifdef YEARS_OLD
   printf("TechOnTheNet is over %d years old.\n", YEARS_OLD);
   #endif
   printf("TechOnTheNet is a great resource.\n");
   return 0;
}