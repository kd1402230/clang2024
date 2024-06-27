#include <stdio.h>
main()
{
	int a, gokei, sum,b;
	float ave;
	gokei = 0;
	sum = 0;
	b = 1;
	printf("®”1>");
	scanf("%d", &a);

	while (a != -999) {
		gokei += a;
		sum++;
		b++;
		printf("®”%d>",b);
		scanf("%d", &a);
	}
	ave = (float)gokei / sum;
	printf("‡Œv%d\n•½‹Ï%.2f", gokei, ave);
}