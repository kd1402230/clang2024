#include <stdio.h>
main()
{
	int flag = 0;
	do {
		printf("����>");
		scanf("%d", &flag);
		if (flag % 2 == 0) {
			printf("����\n");
		}
		else {
			printf("�\n");
		}
		printf("0->�I�� 1->�p��");
		scanf("%d", &flag);
		if (flag == 0) {
			printf("�I�����܂��B");
			break;
		}
	} while (flag == 1);
}