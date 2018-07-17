#include<stdio.h>

int main(){
int a = 10,b = 11,*a1,*b1;
	a1 = &a;
	b1 = &b; 
	printf("%d %d" , a1,&a);
	
	return 0;
}
