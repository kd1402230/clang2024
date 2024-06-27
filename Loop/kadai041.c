#include <stdio.h>
main()
{
	int a,gokei,sum;
	float ave;
	gokei = 0;
	sum = 0;
	printf("整数(-999で終了)？");
	scanf("%d", &a);

	while (a != -999) {
		gokei += a;
		sum++;
		printf("整数(-999で終了)？");
		scanf("%d", &a);
	}
	ave = (float)gokei / sum;
	printf("合計＝%d\n平均＝%.2f", gokei, ave);
}