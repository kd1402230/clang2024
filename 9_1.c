#include<stdio.h>
main(void) {
	int numbers[] = {10,20,30,40,50};
	int total = 0;
	for (int i = 0; i < 5; i++) {
		printf("numbers[%d] = %d\n",i,numbers[i]);
		total += numbers[i];
	}
	printf("‡Œv’l:%d\n", total);
}