#include <stdio.h>
main()
{
	int num, i;
	printf("��������:");
	scanf("%d", &num);
	for (i = 1; i <= 5; i++) {
		printf("%d ", num * i);
	}
}