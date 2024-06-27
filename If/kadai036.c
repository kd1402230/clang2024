#include <stdio.h>
main()
{
	int a, b;
	printf("®”1H");
	scanf("%d", &a);
	printf("®”‚QH");
	scanf("%d", &b);
	if (a > b) {
		printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d‘å‚«‚¢", a, b,a-b);
		;
	}
	else {
		printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d¬‚³‚¢", a, b, b - a);
	}
}