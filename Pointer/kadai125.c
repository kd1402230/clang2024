#include <stdio.h>
main()
{
	int data[10] = { 10, 20, 30, 40, 50, 60, 70, 80,-999 };
	int i;
	int* pd;
	
	pd = data;
	printf("ポインタを固定で表示\n配列data[]=");
	for (i = 0; *(pd + i) != -999; i++) {
		printf("%d ", *(pd + i));
	}
	printf("\nポインタを変化させて表示\n配列data[]=");
	for (pd = data; *(pd) != -999; pd++) {
		printf("%d ", *pd);
	}
}