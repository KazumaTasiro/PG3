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
	printf("0��1�̔ԍ�����͂��Ă�\n0�͋���\n1�͊\n");
	scanf_s("%d", &selection);
	int rand = r();
	Sleep(time * 1000);
	if (rand % 2 == selection) {
		printf("����");
		return 0;
	}
	printf("�s����^^");
	return 0;
}

int main() {
	srand(time(nullptr));
	pRand random = GetRand;
	int randTrue = gambling(random, 3);
	return 0;
}