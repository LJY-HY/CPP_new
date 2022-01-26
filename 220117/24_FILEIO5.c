#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//	구조체를 file에 저장하고 로드하는 방법

struct Point
{
	int x;
	int y;
	int z;
};

//	fwrite 함수는 파일에 바이너리 형태로 출력이 가능
//	fread 함수는 파일의 바이너리 데이터 입력이 가능

int main() {
	struct Point pt = { .x = 10,.y = 20 };
	pt.x += 10;
	pt.y += 20;
	//저장하는 기능을 구현해보자
	FILE* fp = fopen("point.bin","w+");	// wt,wb
	fwrite(&pt, sizeof pt, 1, fp);

	pt.x = 0;
	pt.y = 0;
	pt.z = 0;

	fseek(fp, 0, SEEK_SET);	// fwrite하면서 fp가 file의 끝으로 이동했다. 따라서 이후 fread한다 하더라도 읽어들이 값이 없다.
	//fseek(FILE*,OFFSET,기준)
	//	SEEK_SET	: 시작위치 
	//	SEEK_END
	//	SEEK_CUR	: 현재위치
	fread(&pt, sizeof pt, 1, fp);

	printf("%d %d %d\n", pt.x, pt.y, pt.z);
	fclose(fp);
}