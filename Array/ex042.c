#include <stdio.h>

main()
{
	char data[] = "Apple";
	int i;
	printf("�ꕶ�����\��\n");
	i = 0;
	while (data[i] != '\0')
	{
		printf("%c", data[i]);
		i++;
	}
	printf("\n������ŕ\��\n");
	printf("%s\n",&data[0]);
}//%s�ŏ����Ǝw�肵���Y�F�̂Ƃ��납�當�����\��