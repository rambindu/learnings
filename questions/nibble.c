#include<stdio.h>

unsigned int SwapNibble(unsigned int x)
{
	
	return(((x & 0x0F) << 4)  | ((x & 0xF0 ) >> 4) );

} 
int main()
{
	
	unsigned int x = 0x1234;
	//printf("Enter the number  :" );
	//scanf("%d", &x);
	for(int i = 0; i < sizeof(x)-2;i++){
		printf("%x" ,SwapNibble(x >> 8*i));
	}
	return 0;
}