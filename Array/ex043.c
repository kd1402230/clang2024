#include <stdio.h>

main()
{
	char s[] = "orange";
	int cnt;
	cnt = 0;
	while (s[cnt] != '\0')
	{
		cnt++;
	}
	printf("文字列:%s\n",&s[0]);
	printf("文字数は%d文字\n", cnt);
}