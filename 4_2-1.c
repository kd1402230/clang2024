#include <stdio.h>
main()
{
	int i = 1000;
	char c = i;
	i = (int)c;
	printf("%c�̕����R�[�h��%d\n", c, i);
}