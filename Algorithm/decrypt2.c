#include <stdio.h>
main()
{
	char s[21];
	int i, k[20];
	printf("���������͂��Ă��������B��");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]�̕������L�[��",i);
		scanf("%d", &k[i]);
		s[i] = s[i] - k[i];
	}
	printf("������������́A%s", &s[0]);
}