#include <stdio.h>
void error_meg(void);
main()
{
	int a, b;
	printf("datal data2?:");
	scanf("%d%d", &a, &b);
	if (b == 0) {
		error_meg();
	}
	else {
		printf("%d/%d=%d�E�E�E%d\n", a, b, a / b, a % b);
	}
}void error_meg(void)
{
	printf("�O�Ŋ���Z�o���܂���\n");
	return;
}