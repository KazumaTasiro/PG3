#include "GameScene.h"



GameScene::GameScene()
{
}

GameScene::~GameScene()
{
}

GameScene* GameScene::GetInstance()
{
   //関数内static変数として宣言する
	static GameScene instance;

	return &instance;
}

void GameScene::ChangeScene(int& sceneNum)
{
	if (sceneNum > 3) {
		sceneNum = 0;
	}

}
