#include<stdio.h>
int main()
{
 int number ,t, rev=0,rmdr;
 printf("Enter a number : ");
 scanf("%d",&number);
 t=number;
while(number >0)
{
  rmdr=number%10;
  rev=rev*10+rmdr;
  number=number/10;
}
printf("\n reversed number : %d", rev);

if(t==rev)
{
   printf("\n Entered num %d is a palindrome ", t);   
}
else
{
printf("\nEntered num %d is not a palindrome ", t);
}
return 0;

}
