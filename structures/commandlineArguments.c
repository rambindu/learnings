#include <stdio.h>
int main(int argc, char *argv[])
{
	int noOfArguments=argc;
	printf("Number of arguments %d:\n",noOfArguments);
	while(noOfArguments != 1){
		printf("%s",argv[noOfArguments -1 ]);
		noOfArguments--;
	}
return 0;
}
