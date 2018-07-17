#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node* next;
};

struct node* start1 =NULL;
void printList(){
	
	struct node *tempnode = start1;
	while(tempnode != NULL){
		printf("%d\t",tempnode->data);
		tempnode = tempnode->next;
	}
}
void addNode(){
	int data;
	printf("enter a value\n");
	scanf("%d",&data);
	struct node *temp = start1;
	struct node *newnode = malloc(sizeof(struct node));
	newnode->next = NULL;

	while(temp->next != NULL)
		temp=temp->next;
	temp->next = newnode;
	newnode->data = data;
}

void deleteNode(){
	int data;
	printf("enter a value\n");
	scanf("%d",&data);
	struct node *temp = start1;
	while(temp->next->data != data)
	{
		temp=temp->next;
	}
	temp->next=temp->next->next;
}


int main(){
	int selection;
	start1 = malloc(sizeof(struct node));
	start1->next=NULL;
	start1->data=0;
	void (*fptr[])()={addNode,deleteNode,printList};

	while(1)
	{
		printf("enter your choice\n1. add Node \n 2. delete Node \n 3. print node\n  4. exit\n ");
		scanf("%d",&selection);
		(*fptr[selection-1])();
	}
	return 0;
}
