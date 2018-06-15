#include<stdio.h>
int main(int argc, char* argv[]){
	int ROW = argv[1][0] - 48;
	int COLUMN = argv[2][0] - 48;
	int array[ROW][COLUMN];

	for(int i = 0; i<ROW; i++)
	{
		for(int j =0; j<COLUMN;j++)
		{
			printf("enter %d%d location\n",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	for(int i = 0; i<ROW; i++)
	{
		for(int j =0; j<COLUMN;j++)
			printf("%d\t",array[i][j]);
		printf("\n");
	}
	return 0;
}
