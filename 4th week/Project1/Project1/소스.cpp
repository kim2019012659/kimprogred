#include<stdio.h>

#define MINCHEST  90
#define MAXCHEST  100
int main(void)
{
	int chest;
	char size;

	printf("Enter your chest size : ");
	scanf_s("%d", &chest);
	if (chest <= MINCHEST)
	{
		size = 'S';
	}
	else if ((chest < MAXCHEST) && (chest >= MINCHEST))
	{
		size = 'M';
	}
	else
	{
		size = 'L';
	}

	printf("Your clothes size is %c",size);
	return 0;
}