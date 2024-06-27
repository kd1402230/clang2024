#include <stdio.h>
main()
{
	int num, sum;
	float ave;
		sum = 0;
		do{
			printf("®”H");
			scanf("%d", &num);
			sum += num;
			sum++;
			if (num == -999)
			{
				break;
			}

		} while (1);
	ave = (float)sum / num;
	printf("‡Œv=%d\n", sum);
	printf("•½‹Ï=%f", ave);
}