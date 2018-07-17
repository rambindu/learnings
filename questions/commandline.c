#include <stdio.h>
//#include<string.h>

// int main(int argc, char* argv[]){
	// int firstnum = argv[1][0]-48;
	// int secondnum = argv[2][0]-48;
	// int sum = firstnum + secondnum ;
	// printf("sunm of numbers : %d + %d = %d", firstnum,secondnum,firstnum + secondnum);
	// return 0;
// }

int main(){
	int a = 10,b = 20, c;
	char class[20];
	c = a + b ;
	sprintf(class,"sum of %d + %d is %d  ", a , b, c);
	printf("%s", class);
	return 0;

}