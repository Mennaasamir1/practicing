#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *link;
};

void del_pos(struct node **head, int position)
{
	struct node *current = *head;
	struct node *previous = *head;

	if (*head == NULL)
		printf("list is empty\n");
	else if (position == 1)
	{
		*head = current->link;
		free(current);
		current = NULL;
	} 
	else if (position != 1)
	{
		previous = current;
		current = current->link;
		position--;
	}
	previous->link = current->link;
	free(current);
	current = NULL;
}
int main(void)
{
	int position = 2;
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

	del_pos(&head, position);

	ptr = head;

	while(ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->link;
	}
	printf("\n");
	return (0);
}
