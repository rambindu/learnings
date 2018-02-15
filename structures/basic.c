/*
 *salary of the employee program using structer 
 */
#include <stdio.h>
#include <string.h>

struct employee
{
	int no;
	char name[10];
	int salary;
	char gender;	
};

int main(){
	struct employee emp1;
	//. and ->
	emp1.no = 1;
	strcpy(emp1.name, "bindu");
	emp1.salary = 100000;
	emp1.gender = 'F';
	printf("ID\t:%d\n",emp1.no);
	printf("Name\t:%s\n",emp1.name);
	printf("Salary\t:%d\n",emp1.salary);
	printf("Gender\t:%c\n",emp1.gender);
	return 0;
}
