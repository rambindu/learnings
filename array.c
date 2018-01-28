#include <stdio.h>
int main()
{
	int ArrayName[10],i,j,srch;
	printf("Enter the number j :");
	scanf("%d",&j);
	printf("Enter the array values: ");

	for (i=0; i<j; i++)
	{
		scanf("%d", &ArrayName[i]);
	}
	for (i=0; i<j; i++)
	{		
		printf("  %d\n", ArrayName[i]);
	}
	printf("\n Enter the value of search : ");
	scanf("%d" , &srch);
	for (i=0 ; i < srch ; i ++ )
		if (srch == ArrayName[i])
		{
			printf("\n Search element found at %d\n", i+1);
			break;
		}	
	//			else
	{		
		if(i>srch)
			printf("\n search element not found ");	
	}		
	return 0;
}
