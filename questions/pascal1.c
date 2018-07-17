#include <stdio.h>
#include <stdlib.h>
void PrintPascal(int n){
	int arr[n][n] ;//= malloc(n * sizeof(int));
	int line,i;
	
	for(line=0; line<n;line++)
	{
		for(i=0;i<=line;i++){
			if(line == i || i == 0)
				arr[line][i]=1;
			else
				arr[line][i] = arr[line-1][i]+arr[line-1][i-1];
			printf("%d",arr[line][i]);
		}
		printf("\n");
	}
	
	}
int main(){
	PrintPascal(6);
	return 0;
}
 