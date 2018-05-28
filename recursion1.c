#include<stdio.h>

int fabonacci(int i){
	if(i==0){
		return 0;
	}
	if(i==1){
		return 1;
	} 
	return fabonacci(i-1)+fabonacci(i-2);
}
int main(){
	int i;
	for(i=0;i<10;i++)
	printf("%d\t\n",fabonacci(i));
return 0;
}
