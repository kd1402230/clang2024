#include <stdio.h>
void keisan(int x, int y,int *gokei,float *avg);
main()
{
	int a, b, c;
	float d;
	printf("�������Q����:");
	scanf("%d%d", &a, &b);
	keisan(a, b, &c, &d);
	printf("���v��%d�A���ς�%.2f", c, d);
}
void keisan(int x, int y,int *gokei,float *avg)
{
	*gokei = x + y;
	*avg = (x + y) / 2.0;
	return;
}