#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *link;
};

void del_last(struct node *head)
{
	struct node *temp = head;

	while (temp->link->link != NULL)
	{
		temp = temp->link;
	}
	free(temp->link);
	temp->link = NULL;
}

int main(void)
{
	struct node *head = malloc(sizeof(struct node));
	head->data = 45;
	head->link = NULL;

	struct node *ptr = malloc(sizeof(struct node));
	ptr->data = 70;
	ptr->link = NULL;

	head->link = ptr;

	ptr = malloc(sizeof(struct node));
	ptr->data = 90;
	ptr->link = NULL;

	head->link->link = ptr;
	
	del_last(head);

	ptr = head;
	while (ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->link;
	}
	printf("\n");
	return (0);
}	
