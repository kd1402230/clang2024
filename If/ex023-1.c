#include <stdio.h>

main()
{
	int sec,m, h;
	printf("���������:");
	scanf("%d",&sec );
	if (sec>=0)
	{
		if (sec<=5000)
		{
			h = sec / 3600;
			m = (sec % 3600) / 60;
			s = sec % 60;
			printf("%d����%d��%d�b", h, m, sec);
		}
		else 
		{
			printf("�G���[\n");
		}
	}
	else 
	{
		printf("�G���[\n");
	}
	

}

