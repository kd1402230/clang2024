#include <stdio.h>
#include <string.h>
#define NIN 5
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
int main(void) {
	struct profile data[NIN];
	struct profile* p;
	p = data;
	int i;
	for (i = 0; i < NIN; i++,p++) {
		printf("%d�l�ځi���O�j:",i+1);
		scanf("%s",(p+i)->name);
		printf("%d�l�ځi���N�����j:",i+1);
		scanf("%d%d%d", &(p+i)->birth[0], &(p+i)->birth[1], &(p+i)->birth[2]);
		printf("%d�l��(���t�^):", i + 1);
		scanf("%s", (p+i)->blood);
	}
	for (i = 0; i < NIN; i++,p++) {
		if (strcmp((p+i)->blood, "A") == 0) {
			printf("%s--%d�N%02d��%02d�����܂�@���t�^-%s�^\n",
				(p+i)->name, (p+i)->birth[0], (p+i)->birth[1], (p+i)->birth[2], (p+i)->blood);
		}
	}
}