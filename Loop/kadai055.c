#include <stdio.h>
main()
{
	char a;
	for (a = 'A'; a >= 'A' && a <= 'Z'; a++) {
		printf("%c ", a);
	}
}