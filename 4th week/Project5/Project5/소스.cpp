#include <stdio.h>

#define MINAGE 20
#define YOUNG_MINCHEST 85
#define OID_MINCHEST 90
#define YOUNG_MIDDELECHEST 95
#define OID_MIDDELECHEST 100
int main(void)
{
	int age;
	int chest;
	char size;
	printf("Enter your age and chest size :");
	scanf_s("%d%d", &age, &chest);
	if (age < MINAGE)
	{
		if (chest < YOUNG_MINCHEST) size = 'S';
		else if (chest < YOUNG_MIDDELECHEST) size = 'M';
		else size = 'L';
	}
	else
	{
		if (chest < OID_MINCHEST) size = 'S';
		else if (chest < OID_MIDDELECHEST) size = 'M';
		else size = 'L';
	}

	printf("Your size is %c\n", size);
	return 0;
}