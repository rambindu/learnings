#include<stdio.h>
int LinearSearch(int arr[] , int n, int x) {
	int i;
	for(i=0; i < n ; i++)
		{
		
		if(arr[i] == x)
			return i;
	}
	return -1;
}

int main(){
	int arr[]={11,22,33,44};
	int x= 21;
	int n= sizeof(arr)/sizeof(arr[0] );
	printf("%d is @ %d location \n " ,x, LinearSearch(arr, n, x));
	return 0;
}