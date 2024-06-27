#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int i, j;
	srand(time(0));
	rand();
	i = rand() % 3;
	printf("何を出しますか？\n(1;グー2;チョキ3;パー)");
	scanf("%d", &j);
	switch (j)
	{
	case 1:
		printf("\nプレイヤーは、グーです。\n");
		break;
	case 2:
		printf("\nプレイヤーは、チョキです。\n");
		break;
	case 3:
		printf("\nプレイヤーは、パーです。\n");
		break;
	}
	switch (i)
	{
	case 0:
		printf("\nコンピュータは、グーです。\n");
		break;
	case 1:
		printf("\nコンピュータは、チョキです。\n");
		break;
	case 2:
		printf("\nコンピュータは、パーです。\n");
		break;
	}
	switch (((j-1)-i+3)%3)
	{
	case 0:
		printf("\nあいこです。\n");
		break;
	case 1:
		printf("\nコンピュータの勝ちです。\n");
		break;
	case 2:
		printf("\nプレイヤーの勝ちです。\n");
		break;
	}

}