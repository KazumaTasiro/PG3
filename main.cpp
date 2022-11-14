#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <random>
#include <Windows.h>
#include <functional>

int main() {
	int selection;
	srand(time(nullptr));
	int random = rand() % 6 + 1;
	printf("0か1の番号を入力してね\n0は偶数\n1は奇数\n");
	scanf_s("%d", &selection);

	std::function<void(int)> gambling = [=](int select) {
		if (random % 2 == select) {
			printf("正解");
		}
		else if (random % 2 != select) {
			printf("不正解^^");
		}
		else {
			printf("その値は入れちゃいけないよ");
		}
	};


	std::function<void(std::function<void(int)>, int)>setTimeout = [=](std::function<void(int)> d, int time) {
		Sleep(time * 1000);
		d(selection);

	};

	setTimeout(gambling, 3);

	return 0;
}