#include <stdio.h>
main()
{
	int a,b;
	printf("®”H");
	scanf("%d", &a);
	for (b = 0; b <= 10 ; b++) {
		printf("%d ", a+b);
	}
}