#include<stdio.h>
// int main(){
	// int rev=0,num,r;
	// printf("Enter any number : ");
	// scanf("%d",&num);
	
	// while(num){
		// r=num%10;
		// printf("r = %d \n", r);
		// rev=rev*10+r;
		// printf("rev :%d \n", rev);
		// num=num/10;
	// }
	// printf("reverese  :%d", rev);
	// return 0;
 //}
//
#include<stdio.h>

int main(){
   
    int a,b;
    int sum;

    printf("Enter any two integers: ");
    scanf("%d%d",&a,&b);

    //sum = a - (-b);
    sum = a - ~b -1;

    printf("Sum of two integers : %d %d = %d", a, ~b, sum);

    return 0;
}

