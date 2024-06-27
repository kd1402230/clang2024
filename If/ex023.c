#include <stdio.h>

main()
{
	int sec,s, m, h;
	printf("”š‚ğ“ü—Í:");
	scanf("%d",&sec );
	if ("sec<=5000") {
		h = sec / 3600;
		m = (sec % 3600) / 60;
		s = sec % 60;
		printf("%dŠÔ%d•ª%d•b",h, m, s);
	}
	else {
		printf("ƒGƒ‰[");
	}
}