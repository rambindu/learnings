#include<stdio.h>
int main()
{
		int a;
		char buff[20];
		printf("enter the number : ",a);
		scanf("%d", &a);
		a=a<<1;
		printf("%d", a);
		sprintf(buff,"data : %d ",a);
		printf("%s",buff);
return 0;
}

