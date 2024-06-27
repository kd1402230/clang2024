#include <stdio.h>

int main() {
	double d = 10.5;
	int i = (int)d;
	float f = i;
	printf("%d,%f,%f\n", i, d, f);
}