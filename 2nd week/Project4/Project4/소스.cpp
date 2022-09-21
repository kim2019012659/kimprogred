#include<stdio.h>

int main(void)
{
	int weight, bmi;
	double height;

	printf("enter weight(kg)and height(cm) :");
	scanf_s("%d%lf", &weight, &height);

	bmi = weight / ((height / 100) * (height / 100));

	if (bmi >= 20 && bmi < 25)
	{
		printf("Standard weight.");
	}
	else {
		printf("Weight management is necessary.");
	}
	return 0;
}