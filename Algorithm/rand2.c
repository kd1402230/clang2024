#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int dice;
	srand(time(0));
	rand();//randの空読み
	dice = rand() %301-100;
	printf("発生した乱数は%dです\n", dice);
}