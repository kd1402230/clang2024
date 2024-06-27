#include <stdio.h>
main()
{
	int a;
	printf("0から100までの整数?");
	scanf("%d", &a);
	if (a >= 90) {
		printf("判定結果は「５」です");
	}
	else {
		if (a < 90, 80 <= a) {
			printf("判定結果は「４」です");
		}
		else {
			if (a < 80, 50 <= a) {
				printf("判定結果は「３」です");
			}
			else {
				if (a < 50, 30 <= a) {
					printf("判定結果は「２」です");
				}
				else {
					if (a < 30) {
						printf("判定結果は「１」です");
					}
				}
			}
		}
	}
}