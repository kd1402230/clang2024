#include <stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
};
void display3(struct syohin_data* syohin);

int main(void)
{
	struct syohin_data syohin = {"ケシゴム",50};
	display3(&syohin);
}
void display3(struct syohin_data* syohin)
{
	printf("%s %d\n", syohin->name, syohin->tanka);

	//printf("%s %d\n", (*syohin).name, (*syohin).tanka);
	//こっちでも動く
}