#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int dice;
	srand(time(0));
	rand();//rand�̋�ǂ�
	dice = rand() %301-100;
	printf("��������������%d�ł�\n", dice);
}