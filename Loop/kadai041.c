#include <stdio.h>
main()
{
	int a,gokei,sum;
	float ave;
	gokei = 0;
	sum = 0;
	printf("����(-999�ŏI��)�H");
	scanf("%d", &a);

	while (a != -999) {
		gokei += a;
		sum++;
		printf("����(-999�ŏI��)�H");
		scanf("%d", &a);
	}
	ave = (float)gokei / sum;
	printf("���v��%d\n���ρ�%.2f", gokei, ave);
}