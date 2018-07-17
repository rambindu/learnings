#include <stdio.h>

void swap (int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void BubbleSort(int arr[] ,int n)
{
	int i=0,j=0;
	for(i=0 ;i<n -1gc ;i++)
		for(j=0 ;j<n-i-1 ;j++)
			if(arr[j]>arr[j+1])
				swap(&arr[j],&arr[j+1]);
				
}

void PrintList(int arr[] ,int size)
{
	int i;
	for(i=0;i<size;i++)
		printf("%d \t", arr[i]);
	printf("\n");
}
int main (){
	int arr[]={10,20,50,65,35};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("n=%d\n ", n );
	BubbleSort(arr, n);
	PrintList(arr, n);
	
	return 0;
}