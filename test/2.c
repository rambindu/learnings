#include<stdio.h>
#define Print(i, limit)\
while(limit > i){\
	printf("BINDU");\
	i++;\
} 
//#define gets(a) #a
//#define MURGE(a, b) a##b
//#define MUL(a, b) (a)*(b)
int main(){
	int i=0;
//	printf("result %d", MUL(2+3,3+4));
//	printf("result %d", MURGE (48, 77));
//	printf("result %s", gets(bindu));
	Print(i, 3);
	return 0;
}
