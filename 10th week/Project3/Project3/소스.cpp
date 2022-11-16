#include <stdio.h>
struct cracker
{
	int price;
	int calories;
};
int main(void)
{
	struct cracker basasak;
	printf("Enter the price and calories of basasak. : ");
	scanf_s("%d%d", &basasak.price, &basasak.calories);
	printf("basasak price : $%d\n", basasak.price);
	printf("basasak calories : %dkcal\n", basasak.calories);
	return 0;
}