#include<stdio.h>
#include<string.h>

struct employee
{
	int id;
	char name[15];
	float salary;
        char gender;	
};

int main()
{
	int number,i=0;
	struct employee emp[50];
	printf("Enter the no of Employees  : ");
	scanf("%d",&number);
	while(i != number){
		printf("Enter employee - %d id",i+1);
		scanf("%d",&emp[i].id);
		printf("Enter the employee name: ");
		scanf("%s",emp[i].name);

		i++;
	}
	i=0;	
	while(i != number){
		printf("Employee Etails\t %d :\nName\t:%s\nID\t:%d\n",i+1,emp[i].name,emp[i].id);
		i++;
	}
	return 0;

}
