#include <stdio.h>

main()
{
	int s, i;
	printf("数を入れて:");
	scanf("%d", &s);
	i = 0;
		while (i < s)
		{
		printf("*");
		i++;//i+=1と同じ　１を増やしている(数を数えている)
		}
}
