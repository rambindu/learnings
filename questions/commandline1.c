#include<stdio.h>

int main(int argc, char *argv[]){
	int i;
	printf("argc value : %d \n" , argc);
	printf("arhv[] value : %s \n", argv[0]);
	for (i=0 ; i < argc ; i++){
		printf("%d->%s", i , argv[i]);
		printf("size of argv %d" , sizeof(argv[i]));
	}
	return 0;
} 