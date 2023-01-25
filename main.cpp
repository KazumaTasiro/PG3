#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include"windows.h"
#include"Enemy.h"
using namespace std;

int Enemy::EenemyCount;
bool Enemy::deathFlag;

int main() {
	Enemy* enemy1 = new Enemy;
	Enemy* enemy2 = new Enemy;
	Enemy* enemy3 = new Enemy;
	printf("“G‚Í");
	cout << Enemy::EenemyCount << endl;

	printf("“G‚ðUŒ‚\n");

	enemy1->Death();

	Sleep(1 * 1000);

	if (enemy1->GetDeathFlag()==true) {
		delete enemy1;
		delete enemy2;
		delete enemy3;
	}
	printf("“G‚Í");
	cout << Enemy::EenemyCount << endl;
	return 0;
}