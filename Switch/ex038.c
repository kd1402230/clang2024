#include <stdio.h>

main()
{
	int c;
	printf("���������:");
	scanf("%d", &c);
	if (c >= 10 && c <= 49)
	{
		switch (c / 10)
		{
		case 1:printf("�P�O�_��ł�");
			break;
		case 2:printf("�Q�O�_��ł�");
			break;
		case 3:printf("�R�O�_��ł�");
			break;
		case 4:printf("�S�O�_��ł�");
			break;
		}
	}
	else
	{
		printf("�G���[\n");
	}
}