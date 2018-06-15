#include<stdio.h>
struct myvariable{
	int a;
	char b;
};


int main(int argc, char* argv[]){
		 struct myvariable array[10];
	for(int i = 0; i<10;i++){

	 array[i].a = i;
	 array[i].b = 'a';
	 
	 printf("Row count %d \t%d\t%c\n", i,array[i].a,array[0].b);
	}

	return 0;
}
