#include <stdio.h>
main()
{
	int a,b;
	a = 1;
	b = 0;
	do {
		printf("%d+", a);
		b += a;
		a++;
	} while (b <= 300);
	printf("\b=%d", b);
}