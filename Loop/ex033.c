#include <stdio.h>

main()
{
	int i,sum, gokei;
	float avg;
	sum = 0;
	gokei = 0;
	printf("数は？");
	scanf("%d", &i);
	for (;i != -999;)
	{
		sum += i;
		gokei++;
		printf("数は？");
		scanf("%d", &i);
	}
	avg = (float)sum / gokei;
	printf("合計＝%d\t平均＝%.2f", sum, avg);
}