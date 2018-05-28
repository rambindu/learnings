#include<stdio.h>
int main(){

	int n,i;
	unsigned long long  f=1;
	printf("Enter the number : ");
	scanf("%d", &n);
	if(n < 0)
		printf("Factorial of negative number doesnot exist: ");
	else
	{	
		for (i=1 ; i<=n; ++i)
		{
			f *=i;
		}
		printf("Factorial of the number %d = %llu \n " , n,f);
	} 
return 0;
}

