#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//	구조체를 file에 저장하고 로드하는 방법
//

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
	//pt.x += 10;
	//pt.y += 20;
	////저장하는 기능을 구현해보자
	//FILE* fp = fopen("point.bin","w");	// wt,wb
	//fwrite(&pt, sizeof pt, 1, fp);

	pt.x = 0;
	pt.y = 0;
	pt.z = 0;
	FILE* fp2 = fopen("point.bin", "r");
	if (fp2 == NULL) {
		perror("fopen");
		return 1;
	}
	fread(&pt, sizeof pt, 1, fp2);		//fp1은 read모드이기때문

	printf("%d %d %d\n", pt.x, pt.y,pt.z);
	fclose(fp2);
}