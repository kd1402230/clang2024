#include <stdio.h>
main()
{
	char a;
	printf("‚P•¶Žš“ü—ÍH");
	scanf("%c", &a);
	if (a >= 'a' && a <= 'z')
	{
		printf("•ÏŠ·‚·‚é‚Æ%c", a - 0x20);
	}
	else {
		printf("%c", a);
	}
}