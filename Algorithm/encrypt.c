#include <stdio.h>
main()
{
	char s[80];
	int i;
	printf("s‚ğ“ü—Í");
	scanf("%s", &s[0]);
	i = 0;
	while (s[i] != '\0') {
		s[i]++;
		i++;
	}
	printf("ˆÃ†‰»•¶š‚ÍA%s\n", &s[0]);
}