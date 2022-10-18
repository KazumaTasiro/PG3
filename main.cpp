#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <random>
#include <Windows.h>

typedef int(*pRand)();
int GetRand() {
	return rand();
}

int gambling(pRand r, int time) {
	int selection;
	printf("0か1の番号を入力してね\n0は偶数\n1は奇数\n");
	scanf_s("%d", &selection);
	int rand = r();
	Sleep(time * 1000);
	if (rand % 2 == selection) {
		printf("正解");
		return 0;
	}
	printf("不正解^^");
	return 0;
}

int main() {
	srand(time(nullptr));
	pRand random = GetRand;
	int randTrue = gambling(random, 3);
	return 0;
}