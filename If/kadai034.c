#include <stdio.h>
main()
{
	char a;
	printf("1文字入力？");
	scanf("%c", &a);
	if (a >= 'a' && a <= 'z')
	{
		printf("小文字です");
	}
	else {
		if (a >= 'A' && a <= 'Z') {
			printf("大文字です");
		}
		else{
			printf("ERROR");
		}
	}
}