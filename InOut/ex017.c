#include <stdio.h>

main()
{
	float f1, f2, f3;
	printf("�P�ڂ̎���:");
	scanf("%f", &f1);
	printf("�Q�ڂ̎���:");
	scanf("%f", &f2);
	printf("�R�ڂ̎���:");
	scanf("%f", &f3);
	printf("���v=%.2f ����=%.2f\n", f1 + f2 * f3, (f1 + f2 + f3) / 3);
}