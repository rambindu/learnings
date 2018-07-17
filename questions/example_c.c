#include<stdio.h>
int* getValue();
int main()
{
	int x;
	int *ptr=malloc(sizeof(int));
	*ptr=getValue();
	x=*ptr;
	
	printf("x=%d\n", x);
	return 0;
}

int* getValue()
{
	int val=100;
	printf("%d\n",val);
	return &val;
}