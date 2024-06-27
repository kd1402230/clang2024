#include <stdio.h>
main()
{
	int a = 100, b = 10,c,d,e,f;
	int* p_a;
	int* p_b;
	p_a = &a;
	p_b = &b;
	c = *p_a + *p_b;
	d = *p_a - *p_b;
	e = *p_a * *p_b;
	f = *p_a / *p_b;
	printf("%d+%d=%d\n", a, b, c);
	printf("%d-%d=%d\n", a, b, d);
	printf("%d*%d=%d\n", a, b, e);
	printf("%d/%d=%d\n", a, b, f);
}