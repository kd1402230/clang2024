#include <stdio.h>
main()
{
	int a;
	printf("整数？");
	scanf("%d", &a);
	if (a > 0) {
		printf("プラスです");
	}
	else{
		if (a == 0) {
			printf("0です");
		}
		else {
			printf("マイナスです");
		}
	}
}