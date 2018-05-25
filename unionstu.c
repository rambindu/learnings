//program to know the diffrence bw struct and union,in this the sizeof struct is total aruments size and in union the max size
#include<stdio.h>
union u
{
	char name[30];
	int Rollno;
	float marks;
} u;

struct s
{
	char name[30];
	int Rollno;
	float marks;

}s;

int main(){

printf("Size of the union : %lu  ", sizeof(u));
printf("Size of the struct : %lu ", sizeof(s));
return 0;
}

