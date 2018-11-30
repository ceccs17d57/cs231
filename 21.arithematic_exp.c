#include <stdio.h>
#include <stdlib.h>

struct node {
	char data;
	struct node *next;
}*HEADER;

struct node *newNode() {
	struct node *newptr = malloc(sizeof(struct node));
	if (newptr == NULL) {
		printf("Memory overflow");
		
		exit(0);
	}
	return (newptr);
}
int insertNodeEnd(int data) 
	{
	struct node *newptr = newNode(), *currentNode = HEADER;

	while (currentNode->next != NULL)
	 {
		currentNode = currentNode->next;
	 }

	newptr->next = currentNode->next;
	newptr->data = data;
	currentNode->next = newptr;
	return (0);
	}

int printLinkedList()
	 {
		struct node *currentNode = HEADER->next;
		while (currentNode != NULL) 
			{
			printf("%c", currentNode->data);
			currentNode = currentNode->next;
			}
  		printf("\n");
		return (0);
}

int main()
 {
  char infix[100], buffer;
  int i=0;
	
	HEADER = malloc(sizeof(struct node));
	HEADER->data = 0;
	HEADER->next = NULL;
	

  printf("Enter arithmatic expression : ");
  scanf("%s", infix);
  for (i=0; infix[i]!='\0'; i++) {
    insertNodeEnd(infix[i]);
  }
  printf("Entered experssion : ");
  printLinkedList();

	
	
	return (0);
}

