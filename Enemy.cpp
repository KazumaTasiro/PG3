#include "Enemy.h"
void(Enemy::* Enemy::pFanc[])()
= {
	&Enemy::Approach,
	&Enemy::Shoot,
	&Enemy::Secession
};


void Enemy::Approach()
{
	printf("Ú‹ß’†\n");
	phase_ = EnemyMovement::shoot;
}

void Enemy::Shoot()
{
	printf("ŽËŒ‚’†\n");
	phase_ = EnemyMovement::secession;
}

void Enemy::Secession()
{
	printf("—£’E’†\n");
}

void Enemy::Update()
{
	(this->*pFanc[static_cast<size_t>(phase_)])();
}

Enemy::Enemy()
{
}

Enemy::~Enemy()
{
}

