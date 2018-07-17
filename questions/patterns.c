#include<stdio.h>
// int main(){
 // int n,i,j;
 // printf("Enter no of lines: ");
 // scanf("%d",&n);
 // for(i=0;i<n;i++){
 // for(j=0;j<i;j++){ //for printing spaces
 // printf(" ");
 // }
 // for(j=0;j<n-i;j++){ //for printing the left side
  // printf("%d ",1+j); //the value of j is added to 'A'(ascii value=65)
  // }
  // for(j=n-i-2;j>=0;j--){ //for printing the right side
    // printf("%d ",1+j);
  // }
 // printf("\n");
 // }
 // return 0;
// }
int y;
int fibonacci(int x){
 if(x==1 || x==0) //terminating step
 return x;
 y=fibonacci(x-1)+fibonacci(x-2); //recursive definition
 return y;
}
int main(){
 int a,r;
 printf("Enter the position : ");
 scanf("%d",&a);
 r=fibonacci(a);
 printf("The number at position %d is %d",a,r);
 return 0;
}