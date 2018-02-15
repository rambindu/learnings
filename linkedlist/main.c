#include <stdio.h>
#include <stdlib.h>
typedef struct object{
	int data;
	struct object *next;
}node;
// Initialiatio
// Main
node *node1 = NULL;
void createNode(){
	node *mynode = malloc(sizeof(node));
	node1->next = mynode;
	mynode->data = 12;
	mynode->next = NULL;
}
void printnodes(){
	node *mynode = node1;
	while(mynode->next != NULL)
	{
		printf("%d\n",mynode->data);
		mynode=mynode->next;
	}
}
int main(){
	createNode();
	printnodes();
return 0;
}
