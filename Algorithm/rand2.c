#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int dice;
	srand(time(0));
	rand();//rand‚Ì‹ó“Ç‚İ
	dice = rand() %301-100;
	printf("”­¶‚µ‚½—”‚Í%d‚Å‚·\n", dice);
}