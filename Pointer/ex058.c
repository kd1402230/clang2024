#include <stdio.h>
main()
{
	int a[3], * p;
		p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*p・・・%d\n", *p);
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*p+1・・・%d\n", *p + 1);
		p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*(p+1)・・・%d\n", *(p + 1));
		p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*p+=1・・・%d\n", *p += 1);  //先に取り出してから、１増える
		p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*p++・・・%d\n", *p++);  //「後起き」は他の処理が先に行われる
		p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("(*p)++・・・%d\n", (*p)++);
		p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;　　　　//「前起き」は先に計算が行われる
	printf("*++p・・・%d\n", *++p);
		p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("++*p・・・%d\n", ++ * p);
}