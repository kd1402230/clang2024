#include <stdio.h>

main()
{
	char c;
	printf("���������:");
	scanf("%c", &c);
	if (c >= 'a' && c<= 'z')
	{
		printf("�ϊ������%c", c-0x20);
	}
	else
	{
		if (c >= 'A' && c <= 'Z')
		{
			printf("�ϊ������%c", c + 0x20);
		}
		else
		{
			printf("�G���[");
		}
	}
}