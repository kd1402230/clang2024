#include <stdio.h>

main()
{
	float f1, f2, f3;
	printf("１つ目の実数:");
	scanf("%f", &f1);
	printf("２つ目の実数:");
	scanf("%f", &f2);
	printf("３つ目の実数:");
	scanf("%f", &f3);
	printf("合計=%.2f 平均=%.2f\n", f1 + f2 * f3, (f1 + f2 + f3) / 3);
}