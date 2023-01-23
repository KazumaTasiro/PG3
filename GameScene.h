#pragma once

class GameScene final
{
private:
	//コンストラクタをprivateにする
	GameScene();
	//デストラクタをprivateにする
	~GameScene();

public:
	//コピーコンストラクタを無効にする
	GameScene(const GameScene& obj) = delete;
	//代入演算子を無効にする
	GameScene& operator=(const GameScene& obj) = delete;

	static GameScene* GetInstance();

	void ChangeScene(int& sceneNum);

private:


};
