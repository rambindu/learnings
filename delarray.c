/*
 * deleting element from array 
*/

#include<stdio.h>
int main()
{
	int arrname[10], i, loc, j;

	printf("Enter the array size : ");
	scanf("%d", &j);

	printf("Enter the array element : ");
	for (i = 0 ; i < j ; i++)
		scanf("%d", &arrname[i]);

	printf("Enter the location to be deleted: ");
	scanf("%d", &loc);
	if (loc >= j)
		printf("location can not be deleted : \n");
	else{
		for (i = 0 ; i < j-1; i++ ){
			if(i >= loc)
				arrname[i] = arrname[i+1];
		}

		for(i = 0 ; i < j-1 ; i++) 
			printf("%d \n ", arrname[i]);
	}

	return 0;
}
