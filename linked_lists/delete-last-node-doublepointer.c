#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *link;
};

void del_last(struct node *head)
{
	if (head == NULL)
		printf("list is already empty\n");
	else if (head->link == NULL) /* check if there's one node in the list */
	{
		free(head);
		head = NULL;
	}

	else
	{
		struct node *temp = head;
		struct node *temp2 = head;

		while (temp->link != NULL)
		{
			temp2 = temp;
			temp = temp->link;
		}
		temp2->link = NULL;
		free(temp);
		temp = NULL;
	}
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
