#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int i, s;
	int d[10];
	for (i = 0; i < 10; i++)
		d[i] = rand() % 30 + 1;
	printf("探索値を入力:");
	scanf("%d",&s);
	for (i = 0; i < 10; i++)
	{
		if (s == d[i])
		{
			break;
		}
	}
	if (i == 10) {
		printf("入力データ%dは見つからなかった\n",i);
	}
	else {
		printf("%d番目に見つかった\n", i);
	}
}