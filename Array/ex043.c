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
	printf("������:%s\n",&s[0]);
	printf("��������%d����\n", cnt);
}