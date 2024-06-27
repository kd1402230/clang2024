#include <stdio.h>
main()
{
	int a;
	a = 1;
	do {
		printf("%d ", a);
		a++;
		if (a % 11 == 0) {
			printf("\n");
		}
	} while (a <= 20);
}