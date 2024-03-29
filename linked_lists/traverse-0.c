#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *link;
};

void count_of_nodes(struct node *head);

int main(void)
{
	int count;
	struct node *head = malloc(sizeof(struct node));
	head->data = 45;
	head->link = NULL;

	struct node *current = malloc(sizeof(struct node));
	current->data = 98;
	current->link = NULL;
	head->link = current;

	current = malloc(sizeof(struct node));
	current->data = 30;
	current->link = NULL;

	head->link->link = current;
	
	count_of_nodes(head);

	return (0);
}
void count_of_nodes(struct node *head)
{
	int count = 0;
	struct node *ptr;
	ptr = head;
	if (head == NULL)
	{
		printf("list is empty\n");
		return;
	}
	while (ptr != NULL)
	{
		printf("%d \n", ptr->data);
		count++;
		ptr = ptr->link;
	}
	printf("\n");
	printf("count of nodes is: %d\n", count);
}

