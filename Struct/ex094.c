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
		printf("%d人目（名前）:",i+1);
		scanf("%s",(p+i)->name);
		printf("%d人目（生年月日）:",i+1);
		scanf("%d%d%d", &(p+i)->birth[0], &(p+i)->birth[1], &(p+i)->birth[2]);
		printf("%d人目(血液型):", i + 1);
		scanf("%s", (p+i)->blood);
	}
	for (i = 0; i < NIN; i++,p++) {
		if (strcmp((p+i)->blood, "A") == 0) {
			printf("%s--%d年%02d月%02d日生まれ　血液型-%s型\n",
				(p+i)->name, (p+i)->birth[0], (p+i)->birth[1], (p+i)->birth[2], (p+i)->blood);
		}
	}
}