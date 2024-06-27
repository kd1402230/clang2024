#include <stdio.h>
main()
{
	int a;
	a = 1;
	while (a <= 20) {
		printf("%d ", a);
		a++;
		if (a % 11 == 0) {
			printf("\n");
		}
	}
}