#include <stdio.h>

int main (){
	const int local = 10;
	int *ptr =(int*)&local ;
	printf(" 1st Value of the local : %d  \n  " , local);
	*ptr = 100;
	printf("2nd value : %d  ", local);
		
	return 0;
}