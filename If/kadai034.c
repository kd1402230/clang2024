#include <stdio.h>
main()
{
	char a;
	printf("1�������́H");
	scanf("%c", &a);
	if (a >= 'a' && a <= 'z')
	{
		printf("�������ł�");
	}
	else {
		if (a >= 'A' && a <= 'Z') {
			printf("�啶���ł�");
		}
		else{
			printf("ERROR");
		}
	}
}