#include "GameScene.h"



GameScene::GameScene()
{
}

GameScene::~GameScene()
{
}

GameScene* GameScene::GetInstance()
{
   //�֐���static�ϐ��Ƃ��Đ錾����
	static GameScene instance;

	return &instance;
}

void GameScene::ChangeScene(int& sceneNum)
{
	if (sceneNum > 3) {
		sceneNum = 0;
	}

}
