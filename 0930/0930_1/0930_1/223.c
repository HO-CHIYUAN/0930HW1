#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c;
	printf("input 3 numbers: \n");
	scanf("%d", &a);
	scanf("%d" ,&b);
	scanf("%d", &c);

	if (a > b && a > c)
	{
		printf("%d is the biggest number \n", a);
	}
	if (b > a && b > c)
	{
		printf("%d is the biggest number \n", b);
	}
	if (c > a && c > b)
	{
		printf("%d is the biggest number \n", c);
	}
	if (a < b && a < c)
	{
		printf("%d is the smallest number \n", a);
	}
	if (b < a && b < c)
	{
		printf("%d is the smallest number \n", b);
	}
	if (c < a && c < b)
	{
		printf("%d is the smallest number \n", c);
	}
	return 0;
}