#include <stdio.h>
main()
{
	int gokei,i;    //�J�E���^�Aa���v�p
	int a[] = { 11,22,33,44,55,66 };
	float b[] = { 11.1,22.2,33.3,44.4 };
	int* pa;         //a�p�|�C���^
	float* pb;�@�@�@//b�p�̃|�C���^
	float gb;�@�@�@ //b���v�p

	pa = a;         //a�̃A�h���X���
	pb = b;�@�@�@�@�@//b�̃A�h���X���
	for (gokei = 0,i=0; i < 6; i++) {
		gokei += *pa;
		pa++;
	}
	printf("�z��a\t���v=%d\t����=%.3f\n",gokei,gokei/6.0);
	for (gb = 0, i = 0; i < 4; i++) {
		gb += *pb;
		pb++;
	}
	printf("�z��a\t���v=%.3f\t����=%.3f\n", gb, gb / 4.0);

}