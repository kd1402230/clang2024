#include <stdio.h>
main()
{
	char a;
	printf("�P�������́H");
	scanf("%c", &a);
	if (a >= 'a' && a <= 'z')
	{
		printf("�ϊ������%c", a - 0x20);
	}
	else {
		printf("%c", a);
	}
}