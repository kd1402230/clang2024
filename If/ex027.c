#include <stdio.h>

main()
{
	char c;
	printf("•¶Žš‚ð“ü—Í:");
	scanf("%c", &c);
	if (c >= 'a' && c<= 'z')
	{
		printf("•ÏŠ·‚·‚é‚Æ%c", c-0x20);
	}
	else
	{
		if (c >= 'A' && c <= 'Z')
		{
			printf("•ÏŠ·‚·‚é‚Æ%c", c + 0x20);
		}
		else
		{
			printf("ƒGƒ‰[");
		}
	}
}