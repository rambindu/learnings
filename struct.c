#include<stdio.h>
#include<string.h>

struct abc
{
char name[30];
int rollno;
int marks;

};

void print_abc(char name , int rollno, int marks);

int main()
{

struct abc ABC ={ "bindu" , 1, 56 };
print_abc(ABC.name, ABC.rollno, ABC.marks);
printf("Enter the new name : %s", ABC.name);

return 0;
}

void print_abc(char name, int rollno, int marks)
{

printf("NAME : %s", name );
printf("rollno : %d",rollno);
printf("marks : %d",marks);

printf("\n changing name : " );
strcpy(name , "Hima");


}


