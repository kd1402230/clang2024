#include <stdio.h>

main()
{
	int d1,d2,k;
	printf("���Z�q�����:");
	scanf("%d",&k);
	printf("�Q�̐��������:");
	scanf("%d%d", &d1, &d2);
	if (k == 1)
	{
		printf("%d\n", d1 + d2);
	}
	else
	{
		if (k == 2)
		{
			printf("%d\n", d1 - d2);
		}
		else 
		{
			if (k == 3)
			{
				printf("%d\n", d1 * d2);
			}
			else
			{
				if (k==4)
				{
					printf("%d\n", d1 / d2);
				}
			}
		}
	}
}

