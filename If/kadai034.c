#include <stdio.h>
main()
{
	char a;
	printf("1•¶Žš“ü—ÍH");
	scanf("%c", &a);
	if (a >= 'a' && a <= 'z')
	{
		printf("¬•¶Žš‚Å‚·");
	}
	else {
		if (a >= 'A' && a <= 'Z') {
			printf("‘å•¶Žš‚Å‚·");
		}
		else{
			printf("ERROR");
		}
	}
}