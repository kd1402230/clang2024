#include <stdio.h>
main()
{
	int a, b;
	printf("����1�H");
	scanf("%d", &a);
	printf("�����Q�H");
	scanf("%d", &b);
	if (a > b) {
		printf("%d�̂ق���%d���%d�傫��", a, b,a-b);
		;
	}
	else {
		printf("%d�̂ق���%d���%d������", a, b, b - a);
	}
}