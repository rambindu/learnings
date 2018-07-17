#include<stdio.h>
#include<stdlib.h>

struct Node* head= NULL;
struct Node* second= NULL;
struct Node* third= NULL;

struct Node
{
	int data ;
	struct Node* next;
};

void InsertBeg(int X){
	
	
	struct Node* ptemp;
	ptemp = malloc(sizeof(struct Node));
	ptemp->data=X;
	//printf("%d\n", X);
	ptemp->next= head;
	head=ptemp;
}

void DeteleBeg(int X){
	
	struct Node* ptemp;
	if( head == NULL)
		printf("List is empty \n ");
		else{
				ptemp=head;
				head=ptemp->next;
				X=ptemp->data;
				free(ptemp);
		}
}

void InsertEnd(int X){
	struct 
	
}
void PrintList(struct Node *n){
	while(n != NULL)
	{
		printf("%d \t" , n->data);
		n=n->next;
	}
}
int main(){
	
	head=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	
	head->data=1;
	head->next=second;
	
	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next= NULL;
	
	printf("Initila values \n");
	PrintList(head);
	InsertBeg(10);
	printf(" \n after insert values  \n ") ;
	PrintList(head);
	DeteleBeg(10);
	printf(" \n after delet values \n " );
	PrintList(head);
	
	return 0;
}
