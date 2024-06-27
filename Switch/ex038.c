#include <stdio.h>

main()
{
	int c;
	printf("®”‚ð“ü—Í:");
	scanf("%d", &c);
	if (c >= 10 && c <= 49)
	{
		switch (c / 10)
		{
		case 1:printf("‚P‚O“_‘ä‚Å‚·");
			break;
		case 2:printf("‚Q‚O“_‘ä‚Å‚·");
			break;
		case 3:printf("‚R‚O“_‘ä‚Å‚·");
			break;
		case 4:printf("‚S‚O“_‘ä‚Å‚·");
			break;
		}
	}
	else
	{
		printf("ƒGƒ‰[\n");
	}
}