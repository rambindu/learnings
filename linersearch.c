#include<stdio.h>
int array[20]={1,4,56,8,9,04,3,5,8,9,10};

int find(int data)
{
	int comparison=0;
	int i;
	int index=-1;
	for(i=0;i<20;i++)
	{
		comparison++;
		if(data== array[i])
		{
		index=i;
		break;
		}
		
	}
	printf("total comparisons are made %d",comparison);
	return index;
}
void display(){
printf("[");
int i;
for(i=0;i<20;i++){
	printf("%d ",array[i]);
	}
	printf("]\n");
}
int main(){
printf("Enter array: ");
display();
int location=find(9);
if(location != -1)
printf("\nElement find at location : %d ",(location+1));
else
printf("\nelement not found ");	
return 0;

}