#include <stdio.h>
void atai(int x,int y,int z,int *o,int *t);
main()
{
	int a, b, c, o, t;
	printf("整数を３つ入力:");
	scanf("%d%d%d", &a, &b, &c);
	atai(a, b, c, &o, &t);
	printf("最大値=%d 最小値=%d", o, t);
}
void atai(int x, int y, int z, int* o, int* t)
{
	*o = x;
	if (*o < y) {
		*o = y;
	}
	if (*o<z) {
		*o = z;
	}
	*t = x;
	if (*t > y) {
		*t = y;
	}
	if (*t > z) {
		*t = z;
	}
}

