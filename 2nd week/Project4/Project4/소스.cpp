#include<stdio.h>

int main(void)
{
	int weight, bmi;
	double height;

	printf("weight(kg)¿Í height(cm) input:");
	scanf_s("%d%lf", &weight, &height);

	bmi = weight / ((height / 100) * (height / 100));

	if (bmi >= 20 && bmi < 25)
	{
		printf("you are of normal weight.");
	}
	else {
		printf("Weight management is necessary.");
	}
	return 0;
}