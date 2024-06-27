#include <stdio.h>
main()
{
	int gokei,i;    //カウンタ、a合計用
	int a[] = { 11,22,33,44,55,66 };
	float b[] = { 11.1,22.2,33.3,44.4 };
	int* pa;         //a用ポインタ
	float* pb;　　　//b用のポインタ
	float gb;　　　 //b合計用

	pa = a;         //aのアドレス代入
	pb = b;　　　　　//bのアドレス代入
	for (gokei = 0,i=0; i < 6; i++) {
		gokei += *pa;
		pa++;
	}
	printf("配列a\t合計=%d\t平均=%.3f\n",gokei,gokei/6.0);
	for (gb = 0, i = 0; i < 4; i++) {
		gb += *pb;
		pb++;
	}
	printf("配列a\t合計=%.3f\t平均=%.3f\n", gb, gb / 4.0);

}