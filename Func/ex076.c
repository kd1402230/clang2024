#include <stdio.h>
void keisan(int x, int y,int *gokei,float *avg);
main()
{
	int a, b, c;
	float d;
	printf("®”‚ğ‚Q‚Â“ü—Í:");
	scanf("%d%d", &a, &b);
	keisan(a, b, &c, &d);
	printf("‡Œv‚Í%dA•½‹Ï‚Í%.2f", c, d);
}
void keisan(int x, int y,int *gokei,float *avg)
{
	*gokei = x + y;
	*avg = (x + y) / 2.0;
	return;
}