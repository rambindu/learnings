/*pointer program
 */

#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){
	int *ptr=malloc(2*sizeof(int));
	*ptr=10;
	printf("data %d\n",*ptr);
	printf("address %u\n",ptr++);
	printf("address %u\n",ptr);
	
// dynamic allocation of memory from heap segment 
//malloc- void *malloc(size-t n) does not i
//calloc - void *calloc(size-t n,size -t size) it allocates the value from zero 
//realloc 
//deallocation free();
	*ptr=12;
	char *cha0 = "hello";
	char *cha1 ={"hello1"};
	char *cha2=malloc(100);
	printf("%s\n",cha0);
	printf("%s\n",cha1);
	strcpy(cha2,cha1);
	printf("%s\n",cha2);
	sprintf(cha2,"%s:askdzf %d",cha0,*ptr);
	printf("%s\n",cha2);
return 0;
}
