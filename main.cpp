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
	printf("0��1�̔ԍ�����͂��Ă�\n0�͋���\n1�͊\n");
	scanf_s("%d", &selection);

	std::function<void(int)> gambling = [=](int select) {
		if (random % 2 == select) {
			printf("����");
		}
		else if (random % 2 != select) {
			printf("�s����^^");
		}
		else {
			printf("���̒l�͓��ꂿ�Ⴂ���Ȃ���");
		}
	};


	std::function<void(std::function<void(int)>, int)>setTimeout = [=](std::function<void(int)> d, int time) {
		Sleep(time * 1000);
		d(selection);
	
	};

	setTimeout(gambling, 3);

	return 0;
}