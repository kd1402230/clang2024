#include <stdio.h>
main()
{
	int a;
	printf("整数(-1で入力終了)？");
	while (a != -1) {
		scanf("%d", &a);
	}
}