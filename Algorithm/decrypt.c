#include <stdio.h>
main()
{
	char s[80];
	int i;
	printf("�������");
	scanf("%s", &s[0]);
	i = 0;
	while (s[i] != '\0')
	{
		s[i]--;
		i++;
	}
	printf("������������́A%s\n", &s[0]);
}