#include <stdio.h>
main()
{
	int a;
	printf("�����H");
	scanf("%d", &a);
	if (a > 0) {
		printf("�v���X�ł�");
	}
	else{
		if (a == 0) {
			printf("0�ł�");
		}
		else {
			printf("�}�C�i�X�ł�");
		}
	}
}