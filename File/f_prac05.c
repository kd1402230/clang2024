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
	printf("�\���}�b�v�H�i0,1,2)��");
	scanf("%d", &select);
	if (select >= 0 && select <= 2) {
		SetMap(MapFileName[select], &MapData);
		DrawMap(MapData);
	}
}
void SetMap(char* filename, Map* m) {
	FILE* fp;
	//�}�b�v�f�[�^�ǂݏo���p�̕����^�ϐ�
	char ch;
	int i, j;
	if (fp = fopen(filename, "r")) {
		//2�����z��i�[�p��H�~W�̓�d���[�v�����s
		for (i = 0; i < H; i++) {
			for (j = 0; j < W; j++) {
				//�w��̃t�@�C������ꕶ���ǂݏo��
				ch = fgetc(fp);
				//�ǂݏo����������z��v�f�ɐ����Ƃ��Ċi�[
				m->m_map[i][j] = ch - '0';
			}
			//�s����\n��ǂݎ̂Ă�
			fgetc(fp);
		}
		//�t�@�C�������
		fclose(fp);
	}
}
//�������̓}�b�v�f�[�^���i�[���ꂽ�\���̕ϐ�
void DrawMap(Map m) {
	//���[�v�����p�ϐ�
	int i, j;
	//2�����z�񂩂�l�����o�����߂�H�~W�̓�d���[�v�����s
	for (i = 0; i < H; i++) {
		for (j = 0; j < W; j++) {
			//2�����z��̊e�v�f�̒l���`�F�b�N���ď�����U�蕪����
			switch (m.m_map[i][j]) {
			case 0:
				//�O�̂Ƃ��͋󔒕\��
				printf(" ");
				break;
			case 1:
				//�P�̂Ƃ��́���\��
				printf("��");
				break;
			case 2:
				//�Q�̂Ƃ���@��\��
				printf("@");
				break;
			case 3:
				printf("$");
				break;
			}
		}
		//�s���ŉ��s
		printf("\n");
	}
}