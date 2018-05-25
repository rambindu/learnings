#include<stdio.h>
int main(){


int i,n,flag=0;	
printf("Enter the input number : ");
scanf("%d",&n);

for(i=2;i<=n/2;++i){
if(n%i==0)
{
flag=1;
break;
}

}
if (flag==0)
printf("Entered number is a  prime number %d : ", n);
else
printf("Entred num is  not a prime num %d ",n );
return 0;
}
