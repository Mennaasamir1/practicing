#include <stdio.h>
#include <stdlib.h>

/* How to insert node at the beginning */
struct node
{
	int data;
	struct node *link;
};

struct node* add(struct node **head, int data)
{
	struct node *ptr = malloc(sizeof(struct node));
	ptr->data = data;
	ptr->link = NULL;
	
	ptr->link = *head;
	*head = ptr;
	return (*head);
}

int main(void)
{
	struct node *head = malloc(sizeof(struct node));
	head->data = 45;
	head->link = NULL;

	struct node *ptr = malloc(sizeof(struct node));
	ptr->data = 98;
	ptr->link = NULL;

	head->link = ptr;

	int data = 100;
	
	add(&head, data);
	ptr = head;
	while (ptr != NULL)
	{
		printf("%d\t", ptr->data);
		ptr = ptr->link;
	}
}
