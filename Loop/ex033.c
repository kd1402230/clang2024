#include <stdio.h>

main()
{
	int i,sum, gokei;
	float avg;
	sum = 0;
	gokei = 0;
	printf("���́H");
	scanf("%d", &i);
	for (;i != -999;)
	{
		sum += i;
		gokei++;
		printf("���́H");
		scanf("%d", &i);
	}
	avg = (float)sum / gokei;
	printf("���v��%d\t���ρ�%.2f", sum, avg);
}