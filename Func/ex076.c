#include <stdio.h>
void keisan(int x, int y,int *gokei,float *avg);
main()
{
	int a, b, c;
	float d;
	printf("整数を２つ入力:");
	scanf("%d%d", &a, &b);
	keisan(a, b, &c, &d);
	printf("合計は%d、平均は%.2f", c, d);
}
void keisan(int x, int y,int *gokei,float *avg)
{
	*gokei = x + y;
	*avg = (x + y) / 2.0;
	return;
}