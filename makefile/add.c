//aad and square

#include<stdio.h>
int e=10;
extern int sum(int,int);
extern int square(int);
int main()
{
	int a,b,c,d;
	a=10,b=20;
	c=sum(a,b);
	d=square(b);
	printf("c=%d,d=%d\n",c,d);
	return 0;

}
