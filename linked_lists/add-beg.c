#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *link;
};

void add_beg(struct node **head, int data)
{
	struct node *ptr = malloc(sizeof(struct node));
	ptr->data = data;
	ptr->link = NULL;

	ptr->link = *head;
	*head = ptr;
}
int main(void)
{
	int data = 90;
	struct node *head = malloc(sizeof(struct node));
	head->data = 45;
	head->link = NULL;

	struct node *ptr = malloc(sizeof(struct node));
	ptr->data = 60;
	ptr->link = NULL;

	head->link = ptr;
	
	add_beg(&head, data);
	ptr = head;

	while(ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->link;
	}
	printf("\n");

	return (0);
}
