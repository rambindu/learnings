/*
 * program using add function and #if 0
 */
#include <stdio.h>
#include "add.h"

#define a 10
int main(){
#if 0
	int b=0;
	b = a;
	printf("hello %d \n",b);
#endif
	add();
	return 0;
}
