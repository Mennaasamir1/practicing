#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *link;
}node;

 struct node* del_list(struct node *head)
{
	struct node *temp = head;

	while (temp != NULL)
	{
		temp = temp->link;
		free(head);
		head = temp;
	}
	return (head);
}
int main(void)
{
	node *head = malloc(sizeof(node));
	head->data = 45;
	head->link = NULL;

	node *ptr = malloc(sizeof(node));
	ptr->data = 80;
	ptr->link = NULL;
	
	head->link = ptr;

	ptr = malloc(sizeof(node));
	ptr->data = 90;
	ptr->link = NULL;

	head->link->link = ptr;

	head = del_list(head);
	if (head == NULL)
	{
		printf("list is deleted sucessfully!\n");
	}
	
	ptr = head;
	/*while (ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->link;
	}
	printf("\n"); */
	return (0);
}
