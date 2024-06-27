#include <stdio.h>
main()
{
	char s[21];
	int i, k[20];
	printf("文字列を入力してください。＞");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]の複合化キー＞",i);
		scanf("%d", &k[i]);
		s[i] = s[i] - k[i];
	}
	printf("複合化文字列は、%s", &s[0]);
}