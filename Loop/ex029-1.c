#include <stdio.h>

main()
{
	int s, i;
	printf("��������:");
	scanf("%d", &s);
	i = s;
	while (i > 0)
		{
			printf("*");
			i--;
		}
}