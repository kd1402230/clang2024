#include <stdio.h>
main()
{
	char data[] = "Language";
	char* p_data, sch;
	int cnt=1;
	int flg = 0;
	printf("���������́H");
	scanf("%c", &sch);
	p_data = data;
	while (*p_data != '\0')
	{
		if (sch == *p_data) {
			printf(" % d ",cnt);
		}
		p_data++;//���̃f�[�^��
		cnt++;
	}
	if (flg == 0)
	{
		printf("������Ȃ�����\n");
	}
}