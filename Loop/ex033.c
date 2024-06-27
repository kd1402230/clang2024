#include <stdio.h>

main()
{
	int i,sum, gokei;
	float avg;
	sum = 0;
	gokei = 0;
	printf("”‚ÍH");
	scanf("%d", &i);
	for (;i != -999;)
	{
		sum += i;
		gokei++;
		printf("”‚ÍH");
		scanf("%d", &i);
	}
	avg = (float)sum / gokei;
	printf("‡Œv%d\t•½‹Ï%.2f", sum, avg);
}