#include <stdio.h>
main()
{
	int i, s;
	int d[10] = { 10,5,30,77,16,3,47,29,37,33 };
	printf("�T���l�����:");
	scanf("%d",&s);
	for (i = 0; i < 10; i++)
	{
		if (s == d[i])
		{
			break;
		}
	}
	if (i == 10) {
		printf("���̓f�[�^%d�͌�����Ȃ�����\n",i);
	}
	else {
		printf("%d�ԖڂɌ�������\n", i);
	}
}