#include<stdio.h>
#include<limits.h>
int Prime(int, int);
int main(){
	int number;
	printf("Enter a number : \n");
	scanf("%d", &number);
	Prime(number,number/2);
	return 0;
}

int Prime(int a, int mid){
	
	if(a%mid == 0) { 
	printf("not a prime\n"); 
	return 0; 
	}
	if(mid == 2) { printf("prime\n"); return 0; }
	Prime(a, mid-1);
}
