#include <stdio.h>

main()
{
	int i, data[5];//i‚ğ‚O`‚S‚É•Ï‰»
	for (i = 0; i < 5; i++)
	{
		printf("”z—ñdata[%d]=", i);
		scanf("%d",&data[i]);
	}
	for (i = 0; i < 5; i++)
	{
		printf("data[%d]=%d", i, data[i]);
	}
}