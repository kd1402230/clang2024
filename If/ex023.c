#include <stdio.h>

main()
{
	int sec,s, m, h;
	printf("数字を入力:");
	scanf("%d",&sec );
	if ("sec<=5000") {
		h = sec / 3600;
		m = (sec % 3600) / 60;
		s = sec % 60;
		printf("%d時間%d分%d秒",h, m, s);
	}
	else {
		printf("エラー");
	}
}