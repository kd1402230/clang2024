#include <stdio.h>
main()
{
	int i = 1000;
	char c = i;
	i = (int)c;
	printf("%cの文字コードは%d\n", c, i);
}