#include <stdio.h>

int main(void)
{
	int i,j;

	printf("Enter the multiplication table you want to know in singular numbers:");
	scanf_s("%d",&i);

	for (j = 1; j <= 9; j++)
	{
		printf("%d * %d = %d\n", i, j, i * j);
	}
	

	return 0;
}