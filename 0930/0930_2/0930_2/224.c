#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	printf("input 1 number:");
	scanf("%d", &a);

	if(a%2==0)
		printf("even");
	else
		printf("odd");

	return 0;
}