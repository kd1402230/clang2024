#include <stdio.h>

main()
{
	int a, b, c;
	printf("�s��>");
	scanf("%d", &a);
	printf("��>");
	scanf("%d", &c);
	do
	{
		b = 0;
		do

		{
			printf("��");
			b++;
		} while (b < c);

		printf("\n");
		a--;
	} while (a > 0);

}