#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *link;
};

struct node* del(struct node *head)
{
	if (head == NULL)
		"the list is empty\n";
	else
	{
		struct node *temp = head;
		head = head->link;
		free(temp);
		temp = NULL;
	}
	return (head);
}

int main(void)
{
	struct node *head = malloc(sizeof(struct node));
	head->data = 45;
	head->link = NULL;

	struct node *ptr = malloc(sizeof(struct node));
	ptr-> data = 70;
	ptr->link = NULL;

	head->link = ptr;

	ptr = malloc(sizeof(struct node));
	ptr->data = 98;
	ptr-> link = NULL;

	head->link->link = ptr;

	head = del(head);
	ptr = head;

	while (ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->link;
	}
	printf("\n");

	return (0);
}
