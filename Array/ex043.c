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
	printf("•¶š—ñ:%s\n",&s[0]);
	printf("•¶š”‚Í%d•¶š\n", cnt);
}