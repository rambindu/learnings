#include<stdio.h>
int main()
{
int i ,ifebser,f1=0,f2=1,count=2,lmt;
printf("Enter the limit of the fibonoccis series: ");
scanf("%d", &lmt);
printf("\n fibonoccis series is  \n %d \n %d \n	", f1,f2);

while(count < lmt)
{
ifebser = f1+ f2;
count++;
printf("%d\n",ifebser);
f1=f2;
f2=ifebser;
}

return 0;

}
