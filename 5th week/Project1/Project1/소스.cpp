#include <stdio.h>

int main(void)
{
	int i,j;

	printf("Enter the multiplication as a singular:");
	scanf_s("%d",&i);

	for (j = 1; j <= 9; j++)
	{
		printf("%d * %d = %d\n", i, j, i * j);
	}
	

	return 0;
}