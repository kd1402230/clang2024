#include <stdio.h>

main()
{
	int i,gokei;
	i = 1;
	gokei = 0;
		for (i=1;i<=10;i++)
		{
			gokei+= i;
			printf("1����%d�܂ł̘a=%d\n", i, gokei);
		}
}