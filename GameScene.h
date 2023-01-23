#pragma once

class GameScene final
{
private:
	//�R���X�g���N�^��private�ɂ���
	GameScene();
	//�f�X�g���N�^��private�ɂ���
	~GameScene();

public:
	//�R�s�[�R���X�g���N�^�𖳌��ɂ���
	GameScene(const GameScene& obj) = delete;
	//������Z�q�𖳌��ɂ���
	GameScene& operator=(const GameScene& obj) = delete;

	static GameScene* GetInstance();

	void ChangeScene(int& sceneNum);

private:


};
