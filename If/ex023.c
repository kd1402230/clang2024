#include <stdio.h>

main()
{
	int sec,s, m, h;
	printf("���������:");
	scanf("%d",&sec );
	if ("sec<=5000") {
		h = sec / 3600;
		m = (sec % 3600) / 60;
		s = sec % 60;
		printf("%d����%d��%d�b",h, m, s);
	}
	else {
		printf("�G���[");
	}
}