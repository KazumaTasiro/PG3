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
	printf("0‚©1‚Ì”Ô†‚ğ“ü—Í‚µ‚Ä‚Ë\n0‚Í‹ô”\n1‚ÍŠï”\n");
	scanf_s("%d", &selection);
	int rand = r();
	Sleep(time * 1000);
	if (rand % 2 == selection) {
		printf("³‰ğ");
		return 0;
	}
	printf("•s³‰ğ^^");
	return 0;
}

int main() {
	srand(time(nullptr));
	pRand random = GetRand;
	int randTrue = gambling(random, 3);
	return 0;
}