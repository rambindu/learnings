#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){
	int *ptr=malloc(2*sizeof(int));
	*ptr=10;
	printf("data %d\n",*ptr);
	printf("address %u\n",ptr++);
	printf("address %u\n",ptr);
//dynamic allocation of memory
//malloc
//calloc
//realloc
	*ptr=12;
	char *cha0 = "hello";
	char *cha1 ={"hello1"};
	char *cha2=malloc(100);
	printf("%s",cha0);
	printf("%s",cha1);
	strcpy(cha2,cha1);
	printf("%s",cha2);
	sprintf(cha2,"%s:askdzf %d",cha0,*ptr);
	printf("%s",cha2);
return 0;
}