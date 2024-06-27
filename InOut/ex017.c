#include <stdio.h>

main()
{
	float f1, f2, f3;
	printf("‚P‚Â–Ú‚ÌÀ”:");
	scanf("%f", &f1);
	printf("‚Q‚Â–Ú‚ÌÀ”:");
	scanf("%f", &f2);
	printf("‚R‚Â–Ú‚ÌÀ”:");
	scanf("%f", &f3);
	printf("‡Œv=%.2f •½‹Ï=%.2f\n", f1 + f2 * f3, (f1 + f2 + f3) / 3);
}