#include <stdio.h>

main()
{
	int a, b, c;
	printf("çsêî>");
	scanf("%d", &a);
	printf("óÒêî>");
	scanf("%d", &c);
	do
	{
		b = 0;
		do

		{
			printf("Å†");
			b++;
		} while (b < c);

		printf("\n");
		a--;
	} while (a > 0);

}