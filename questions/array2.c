#include <stdio.h>
int main(){
	int array[10];
	int sum=0,n,average;
	printf("Enter the n value :");
	scanf("%d",&n);
	for(int i = 0 ; i < n ;i++)
	{
		printf("numbers : " );
		scanf("%d", &array[i]);
		sum = sum + array[i];
	}
	average = sum / n ;
	printf("average of numbres  %d / %d  = %d \n", sum,n,average);
	return 0;
	
}