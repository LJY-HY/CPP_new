#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 메모리 누수 찾기




// 구조체를 통해ㅓㅅ 프로그램 내부에서 malloc정보기록
struct alloc_info {
	char file[256];
	char func[256];
	int line;
	void* addr;
	int size;
};
struct alloc_info info[1000];
int cnt = 0;
void debug_malloc(int size, const char* file, const char* func, int line) {
	void* p = malloc(size);
	strcpy(info[cnt].file, file);
	strcpy(info[cnt].func, func);
	info[cnt].line = line;
	info[cnt].size = size;
	info[cnt].addr = p;
	++cnt;
	return p;
}
void debug_free(void* addr) {
	for (int i = 0; i < cnt; ++i) {
		if (info[i].addr == addr) {
			free(addr);
			info[i].addr = NULL;
			return;
		}
	}
	printf("erorr\n");
}
void debug_check() {
	// cnt안에서 NULL로 되어ㅣㅇㅆ지 않은 addr이 ㅣㅇㅆ는지 확인합니다.
	int leak = 0;
	for (int i = 0; i < cnt; ++i) {
		++leak;
	}
	printf("%d leaks!", leak);
}
#define malloc(size) debug_malloc(size,__FILE__,__func__,__LINE__)
#define free(addr) debug_free(addr)

int main() {
	int* p1 = (int*)malloc(sizeof(int) * 10);
	int* p2 = (int*)malloc(sizeof(int) * 10);
	int* p3 = (int*)malloc(sizeof(int) * 10);
	
	free(p1);
	free(p2);
}