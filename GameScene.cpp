#include "GameScene.h"



GameScene::GameScene()
{
}

GameScene::~GameScene()
{
}

GameScene* GameScene::GetInstance()
{
   //ŠÖ”“àstatic•Ï”‚Æ‚µ‚ÄéŒ¾‚·‚é
	static GameScene instance;

	return &instance;
}

void GameScene::ChangeScene(int& sceneNum)
{
	if (sceneNum > 3) {
		sceneNum = 0;
	}

}
