#include <stdio.h>
#include <stdlib.h>
/* insertion at the end */
struct node 
{
	int data;
	struct node *link;
};

void add_at_end(struct node *head, int data)
{
	struct node *pt, *temp;

	pt = head;
	temp = malloc(sizeof(struct node));
	temp->data = data;
	temp->link = NULL;

	while (pt->link != NULL)
	{
		pt = pt->link;
	}
	pt->link = temp;
}

int main(void)
{
	struct node *head = malloc(sizeof(struct node));
	head->data = 45;
	head->link = NULL;

	struct node *ptr = malloc(sizeof(struct node));
	ptr->data = 80;
	ptr->link = NULL;

	head->link = ptr;

	add_at_end(head, 67);
	
	ptr = head;
	while (ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->link;
	}
	printf("\n");

	return 0;
}
