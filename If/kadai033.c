#include <stdio.h>
main()
{
	char a;
	printf("アルファベット？");
	scanf("%c", &a);
	if (a >= 'A' && a <= 'Z')
	{
		printf("大文字です");
	}
	else {
		printf("小文字です");
	}
}