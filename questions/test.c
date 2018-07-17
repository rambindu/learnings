#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]){
	 int *ptr = malloc(4*(argv[1][0]-48));

	 for (int i = 0 ;i <= (argv[1][0]-48);i++){
		printf("enter number");
		scanf("%d", &*ptr);
		printf("%d\n",ptr++);
		
	 }
	 int i=3;
while(--ptr != 0)
{
	printf("%d",*ptr);
}
return 0;
}