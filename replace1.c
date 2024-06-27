#include <stdio.h>
main()
{
	int a = 5, b = 3, work;
	work = a;
	a = b;
	b= work;
	printf("a=%d\tb=%d\n", a, b);
}