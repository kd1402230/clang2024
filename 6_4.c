#include <stdio.h>
main()
{
	int flag = 0;
	do {
		printf("êÆêî>");
		scanf("%d", &flag);
		if (flag % 2 == 0) {
			printf("ãÙêî\n");
		}
		else {
			printf("äÔêî\n");
		}
		printf("0->èIóπ 1->åpë±");
		scanf("%d", &flag);
		if (flag == 0) {
			printf("èIóπÇµÇ‹Ç∑ÅB");
			break;
		}
	} while (flag == 1);
}