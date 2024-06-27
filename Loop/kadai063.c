#include <stdio.h>
main()
{
	int a;
	a = 20;
	while (a >= 1) {
		printf("%d ", a);
		a--;
		if (a % 10 == 0) {
			printf("\n");
		}
	}
}