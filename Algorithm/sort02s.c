#include <stdio.h>
#define N 5
int main() {
	int d[N] = { 30,7,25,16,10 };
	int i, j, w;
	printf("\[gO:");
	for (i = 0; i < N; i++) {
		printf("%d ", d[i]);
	}
	printf("\n");

	for (i = N-1; i > 0; i--) {
		printf("\[gÍÍ:d[0]`d[%d]\n", i);
		for (j = 0; j < i; j++) {
			printf("d[%d]:%2dÆd[%d]:%2dÌär\n", j, d[i], j + 1, d[j + 1]);
			if (d[j] > d[j + 1]) {
				w = d[j];
				d[j] = d[j + 1];
				d[j + 1] = w;			
			}
		}
	}
	printf("\[gã:");
	for (i = 0; i < N; i++) {
		printf("%d ", d[i]);
	}
}
