#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 五乞軒 刊呪 達奄




// 姥繕端研 搭背っさ 覗稽益轡 鎧採拭辞 malloc舛左奄系
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
	// cnt照拭辞 NULL稽 鞠嬢びしざ走 省精 addr戚 びしざ澗走 溌昔杯艦陥.
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