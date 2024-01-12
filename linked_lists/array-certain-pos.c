#include <stdio.h>

void add(int arr[], int arr2[], int size, int n, int data, int pos)
{
	int i, j;
	int index = pos - 1;

	/* to copy the old data from pos 0 to pos 3 */
	for (i = 0; i <= index - 1; i++)
	{
		arr2[i] = arr[i];
	}
	arr2[index] = data;
	
	for (i = index + 1, j = index; i < n + 1, j < n; i++, j++)
	{
		arr2[i] = arr[j];
	}

}
int main(void)
{
	int arr[] = {2, 34, 21, 6, 7, 8, 90, 67, 23, 39};
	int pos = 5, data = 78, i;
	int size = sizeof(arr) / sizeof(arr[0]);
	int arr2[size + 1];
	
	add(arr, arr2, size, pos, n, data);

	for (i = 0; i < size + 1; i++)
	{
		printf("%d ", arr2[i]);
	}

	return (0);
}
