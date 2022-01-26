#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//	����ü�� file�� �����ϰ� �ε��ϴ� ���

struct Point
{
	int x;
	int y;
	int z;
};

//	fwrite �Լ��� ���Ͽ� ���̳ʸ� ���·� ����� ����
//	fread �Լ��� ������ ���̳ʸ� ������ �Է��� ����

int main() {
	struct Point pt = { .x = 10,.y = 20 };
	pt.x += 10;
	pt.y += 20;
	//�����ϴ� ����� �����غ���
	FILE* fp = fopen("point.bin","w+");	// wt,wb
	fwrite(&pt, sizeof pt, 1, fp);

	pt.x = 0;
	pt.y = 0;
	pt.z = 0;

	fseek(fp, 0, SEEK_SET);	// fwrite�ϸ鼭 fp�� file�� ������ �̵��ߴ�. ���� ���� fread�Ѵ� �ϴ��� �о���� ���� ����.
	//fseek(FILE*,OFFSET,����)
	//	SEEK_SET	: ������ġ 
	//	SEEK_END
	//	SEEK_CUR	: ������ġ
	fread(&pt, sizeof pt, 1, fp);

	printf("%d %d %d\n", pt.x, pt.y, pt.z);
	fclose(fp);
}