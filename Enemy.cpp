#include "Enemy.h"

Enemy::Enemy()
{
	EenemyCount++;
}

Enemy::~Enemy()
{
	EenemyCount--;
}

void Enemy::Death()
{
	deathFlag = true;
}

bool Enemy::GetDeathFlag()
{
	return deathFlag;
}

