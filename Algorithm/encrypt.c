#include <stdio.h>
main()
{
	char s[80];
	int i;
	printf("sを入力");
	scanf("%s", &s[0]);
	i = 0;
	while (s[i] != '\0') {
		s[i]++;
		i++;
	}
	printf("暗号化文字は、%s\n", &s[0]);
}