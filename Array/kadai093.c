#include <stdio.h>
main()
{
	int a[10], b[10], c[10],i;
	for (i = 0; i < 10; i++)
	{
		a[i] = (i * 10);
	}
	for (i = 0; i < 10; i++)
	{
		b[i] = (i * 100);
	}
	for (i = 0; i < 10; i++)
	{
		c[i] = a[1] + b[2];
	}
	for (i = 0; i < 10; i++)
	{
		printf("”z—ña=%d", a[i]);
		printf("”z—ña=%d", b[i]);
		printf("”z—ña=%d", c[i]);
	}
}