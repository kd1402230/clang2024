#include <stdio.h>
main()
{
	int a;
	printf("0����100�܂ł̐���?");
	scanf("%d", &a);
	if (a >= 90) {
		printf("���茋�ʂ́u�T�v�ł�");
	}
	else {
		if (a < 90, 80 <= a) {
			printf("���茋�ʂ́u�S�v�ł�");
		}
		else {
			if (a < 80, 50 <= a) {
				printf("���茋�ʂ́u�R�v�ł�");
			}
			else {
				if (a < 50, 30 <= a) {
					printf("���茋�ʂ́u�Q�v�ł�");
				}
				else {
					if (a < 30) {
						printf("���茋�ʂ́u�P�v�ł�");
					}
				}
			}
		}
	}
}