#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, c, d, e, m;

	printf("�п�J�@��Ѫ��`���{��(����):");
	scanf("%f", &a);
	printf("�п�J�T�o�@����/�[�ڦh�ֿ�:");
	scanf("%f", &b);
	printf("�п�J�����@����/�[�گ��p�h�֤���:");
	scanf("%f", &c);
	printf("�п�J�@�Ѫ������O:");
	scanf("%f", &d);
	printf("�п�J�@�Ѫ��q��O(�L���O):");
	scanf("%f", &e);

	m = (a / c)*b + d + e;

	printf("\n");
	printf("�@�ѤU�Ӷ}���h�u�@����O��:");
	printf("%f", m);

}