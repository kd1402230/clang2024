#include <stdio.h>
main()
{
	int s, i;
	int d[11] = {10, 5, 30, 77, 16, 3, 47, 29, 37, 33};
	printf("�T���n�����:");
	scanf("%d", &s);
	for (d[10] = s, i = 0; s != d[i]; i++)
	{
		if (i == 10) {
			printf("������Ȃ�����\n");
		}
		else {
			printf("�T���n%d���Ad[%d]�Ŕ����I\n", s, i);
		}
	}
}