#include <stdio.h>

main()
{
	int s, i;
	printf("数を入れて:");
	scanf("%d", &s);
	i = s;
	while (i > 0)
		{
			printf("*");
			i--;
		}
}