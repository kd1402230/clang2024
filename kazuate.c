#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int ans,num,cnt;
	srand(time(0));
	rand();
	ans = rand() % 100 + 1;
	printf("�����ăQ�[��\n");
	printf("�P�`�P�O�O�܂ł̐������Ȃ����ł��Ă�Q�[��\n");
	cnt = 0;
	while (1)
	{
		printf("���P�`�P�O�O�����:");
		scanf("%d", &num);
		cnt++;
		if (ans > num)
		{
			printf("%d���傫���ł�\n\n", num);
		}
		else if (ans < num)
		{
			printf("%d��菬�����ł�\n\n",num);
		}
		else
		{
			printf("������I%d��œ�����܂���\n", cnt);
			break;
		}
	}
}