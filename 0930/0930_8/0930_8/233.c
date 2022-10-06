#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, c, d, e, m;

	printf("請輸入一整天的總里程數(公里):");
	scanf("%f", &a);
	printf("請輸入汽油一公升/加侖多少錢:");
	scanf("%f", &b);
	printf("請輸入平均一公升/加侖能行駛多少公里:");
	scanf("%f", &c);
	printf("請輸入一天的停車費:");
	scanf("%f", &d);
	printf("請輸入一天的通行費(過路費):");
	scanf("%f", &e);

	m = (a / c)*b + d + e;

	printf("\n");
	printf("一天下來開車去工作的花費為:");
	printf("%f", m);

}