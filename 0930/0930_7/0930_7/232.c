#include <stdio.h>
#include <stdlib.h>

int main()
{
	float h,w,a;

	printf("input height and weight:\n");
	scanf("%f", &h);
	scanf("%f", &w);

	a = w / (h*h);
	printf("\n");
	printf("your BMI is:");
	printf("%f",a);

	printf("\n");
	printf("\n");
	printf("BMI Values\n");
	printf("Underweight:\t less than 18.5\n");
	printf("Normal:     \t between 18.5 and 24.9\n");
	printf("Overweight:\t between 25 and 29.9\n");
	printf("Obese:     \t 30 or greater");

}