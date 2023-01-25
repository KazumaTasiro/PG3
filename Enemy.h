#pragma once
#include <stdio.h>

class Enemy
{
public:



	enum EnemyMovement
	{
	approach,
	shoot,
	secession
	};
	EnemyMovement phase_= EnemyMovement::approach;

	void Approach();
	void Shoot();
	void Secession();

	void Update();
	Enemy(); 
	~Enemy();
private:
	static void (Enemy::* pFanc[])();

};