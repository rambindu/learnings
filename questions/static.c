#include <stdio.h>
void status ();
int main(){
	
	int i;
	for(i=0 ; i<5 ; i++)
		status();
	return 0;
}

void status()
{
	int a =1 ;
	static int b =1;
	a+=1;
	b+=1;
	printf("a=%d , b=%d \n", a,b);
}