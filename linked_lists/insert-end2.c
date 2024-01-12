#include <stdio.h>
#include <stdlib.h>

/* insertion at the end "less complex way" */
struct node
{
	int data;
	struct node *link;
};
void add(struct node *head, int data)
{
	struct node *ptr = head;
	struct node *temp = malloc(sizeof(struct node));

	temp->data = data;
	temp->link = NULL;

	ptr->link = temp;


}

void add_pos(struct node *head, int data, int pos)
{
	struct node *ptr = head;
	struct node *ptr2 = malloc(sizeof(struct node));
	ptr2->data = data;
	ptr2->link = NULL;

	pos--;
	while (pos != 1)
	{
		ptr = ptr->link;
		pos--;
	}
	ptr2->link = ptr->link;
	ptr->link = ptr2;
}
int main(void)
{
	int data = 20, pos = 3;
	struct node *head = malloc(sizeof(struct node));
	head->data = 45;
	head->link = NULL;

	add(head, 90);
	add(head, 80);
	add(head, 70);
	
	add_pos(head, data, pos);
	
	struct node *ptr = head;
	while (ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->link;
	}
	printf("\n");

	return (0);
}
