#include <stdio.h>
void koukan(int *x, int *y);
main()
{
	int a, b;
	a = 10;
	b = 20;
	printf("�֐����s�O�̒l:\n");
	printf("a=%d\tb=%d\n", a, b);
	koukan(&a, &b);
	printf("�֐����s��̒l:\n");
	printf("a=%d\tb=%d\n", a, b);
}
void koukan(int *x, int *y) {
	int w;
	w = *x;
	*x = *y;
	*y = w;
	return;
}