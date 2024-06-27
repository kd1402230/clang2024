#include <stdio.h>
main()
{
	char a,b;
	printf("アルファベット小文字？");
	scanf("%c", &b);
	for (b = 'a'; b <= 'z'; b++) {
		printf("%c ", b);
	}
}