#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int a, b;
	printf("input 2 numbers: \n");
	scanf("%d", &a);
	scanf("%d", &b);

	if (a > b)
	{
		if (a%b == 0)
		{
			printf("A是B的倍數");
		}
		else
			printf("A不是B的倍數");
	}
	else
		printf("the first number is biger than second");

	return 0;
}