#include <stdio.h>

main()
{
	int i;
	float a[10];
	for (i = 0; i < 10; i++)
	{
		a[i] = (i * 1.1000000);
	}
	for (i = 0; i < 10;i++)
	{
		printf("a[%d]=%f\n", i, a[i]);
	}
}