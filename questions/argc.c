#include<stdio.h>
#include<stdlib.h>
int main (int argc,char* argv[])
{
	//for(int i=1;i<argc;i++)
	//printf("%d --> %s\n",i,argv[i]);
		int sum;
		//int a = argv[1][0] -48;
		
	//	int b = argv[2][0] -48;
		
		sum= atof(argv[1])+atof(argv[2]);
		printf("sum is %d" ,sum);
	return 0;
}