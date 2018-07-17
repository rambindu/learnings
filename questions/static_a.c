#include<stdio.h>
/* void display(void);
int main()
{
	display();
	display();
	display();
	return 0;
}

void display(void)
{
	int x=100;
	static int k=10;
	k++;
	printf("k=%d , x=%d \t", k , x);
} */
void test(int,int);
void fun (int);
int a=10,b,c=100,d=200;
int main()
{
	int x=10,y=20,a=15,c=300;
	c--;
	printf("c=%d", c);
	test(x,y);
	printf("b=%d\n", b);
	fun(150);
	return 0;
}
void test(int x,int y)
{
	int big;
	big=x>y?x:y;
	printf("big num is %d \n", big);
	printf("a=%d,c=%d,d=%d\n",a,c,d);
	b=25;
}
void fun(int c)
{
	printf("c=%d,d=%d\n",c,d);
}