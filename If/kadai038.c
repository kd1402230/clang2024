#include <stdio.h>
main()
{
	char a;
	printf("１文字入力？");
	scanf("%c", &a);
	if (a >= 'a' && a <= 'z')
	{
		printf("変換すると%c", a - 0x20);
	}
	else {
		printf("%c", a);
	}
}