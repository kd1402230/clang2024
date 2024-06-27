#include<stdio.h>
#define MapNum 3
#define W 10
#define H 5
typedef struct {
	int m_map[H][W];
} Map;
void SetMap(char* filename, Map* m);
void DrawMap(Map m);
main()
{
	Map MapData;
	char* MapFileName[MapNum] =
	{ "map0.txt","map1.txt","map2.txt" };
	int select;
	printf("表示マップ？（0,1,2)＞");
	scanf("%d", &select);
	if (select >= 0 && select <= 2) {
		SetMap(MapFileName[select], &MapData);
		DrawMap(MapData);
	}
}
void SetMap(char* filename, Map* m) {
	FILE* fp;
	//マップデータ読み出し用の文字型変数
	char ch;
	int i, j;
	if (fp = fopen(filename, "r")) {
		//2次元配列格納用にH×Wの二重ループを実行
		for (i = 0; i < H; i++) {
			for (j = 0; j < W; j++) {
				//指定のファイルから一文字読み出し
				ch = fgetc(fp);
				//読み出した文字を配列要素に整数として格納
				m->m_map[i][j] = ch - '0';
			}
			//行末の\nを読み捨てる
			fgetc(fp);
		}
		//ファイルを閉じる
		fclose(fp);
	}
}
//第一引数はマップデータが格納された構造体変数
void DrawMap(Map m) {
	//ループ処理用変数
	int i, j;
	//2次元配列から値を取り出すためのH×Wの二重ループを実行
	for (i = 0; i < H; i++) {
		for (j = 0; j < W; j++) {
			//2次元配列の各要素の値をチェックして処理を振り分ける
			switch (m.m_map[i][j]) {
			case 0:
				//０のときは空白表示
				printf(" ");
				break;
			case 1:
				//１のときは■を表示
				printf("■");
				break;
			case 2:
				//２のときは@を表示
				printf("@");
				break;
			case 3:
				printf("$");
				break;
			}
		}
		//行末で改行
		printf("\n");
	}
}