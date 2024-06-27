#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int i,data[20],target,work;
	for (i = 0; i < 20; i++)
	{
		data[i] = i + 1;
	}
	srand(time(0));
	printf("ƒVƒƒƒbƒtƒ‹Œã\n");
		for (i = 0; i < 20; i++)
		{
			target = rand() % 20;
			work = data[i];
			data[i] = data[target];
			data[target]=work;
			printf("data[%d]=%d\n",i,data[i]);
		}
}