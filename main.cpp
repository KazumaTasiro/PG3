#include <stdlib.h>
#include <stdio.h>
#include"GameScene.h"
#include"windows.h"

int main() {

	GameScene* gameScene = GameScene::GetInstance();
	int Scene = 0;
	while (true)
	{
			
			gameScene->ChangeScene(Scene);
			printf_s("scene%d",Scene);
			Scene++;
			Sleep(1 * 1000);
			system("cls");
			
	}

	return 0;
}