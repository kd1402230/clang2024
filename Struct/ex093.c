#include <stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
	int kosuu;
};
int main(void) {
	struct syohin_data syohin[3] = { {"�G���s�c",30,5},
										{"�����S��",50,2},
										{"�t�f�o�R",500,3} };
	struct syohin_data* p;
	p = syohin;
	int i;
	for (i = 0; i < 3; i++) {
		printf("���i��:%s\t", (p+i)->name);
		printf("�P��:%4d\t", (p+i)->tanka);
		printf("��:%4d\t", (p+i)->kosuu);
		printf("���z:\\%4d\n", (p+i)->tanka * (p+i)->kosuu);
	}
}