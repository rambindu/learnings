#include<stdio.h>
int checksum_v1(int data[])
{
char i;
int sum = 0;
for (i = 0; i < 64; i++)
{
sum =sum + data[i];
printf("%d " ,data[i]);

}
return sum;
}
int main(){
	int array[65];
	for(int i=0;i<64;i++)
	{
		array[i] = rand()%10;
	}
	printf("check sum =%d \n" , checksum_v1(array));
	
	return 0;
}
