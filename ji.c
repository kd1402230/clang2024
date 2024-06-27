#include<stdio.h>
#define Sol_Num 3
// 構造体の宣言
typedef struct {
	char   Wname[20];	//武器名
	int    bullet;		//弾数
	float  atk;			  //攻撃力
} Weapon;						//構造体をWeaponとして定義
typedef struct {
	char   name[20];	//隊員名
	int    hp;				//隊員hp
	Weapon wpn;			  //武器構造体変数
} Soldier;					//構造体をSoldierとして定義
// プロトタイプ宣言
void SetInfo(Soldier* s, char* filename);
void Display(Soldier *s);

main()
{
	//構造体変数の宣言
	Soldier sols[Sol_Num];
	SetInfo(&sols, "file04.txt");
	Display(sols);
}

void SetInfo(Soldier* s, char* filename) {
	FILE* fp;
	int i;
	if (fp = fopen(filename, "r")) {
		for (i = 0; i < Sol_Num; i++) {
			fscanf(fp, "%s%d%s%d%f", (s+i)->name,
				&(s + i)->hp, (s + i)->wpn.Wname,
				&(s + i)->wpn.bullet, &(s + i)->wpn.atk);
		}
		fclose(fp);
	}
	else {
		printf("ファイルの読み込みエラー\n");
	}
}

void Display(Soldier* s) {
	int i;
	for (i = 0; i < Sol_Num;i++) {
		printf("%s 体力:%d\n", s.name, s.hp);
		printf("武器:%s 　残弾数:%d 　攻撃力:%.2f\n",
			s.wpn.Wname, s.wpn.bullet, s.wpn.atk);
	}
}