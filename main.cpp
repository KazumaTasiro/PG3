#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include"windows.h"
#include"Enemy.h"
using namespace std;



int main() {
	Enemy* enemy = new Enemy();

	enemy->Update();
	enemy->Update();
	enemy->Update();
	return 0;
}