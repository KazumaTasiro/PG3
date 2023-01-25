#pragma once

class Enemy
{
protected:
public:
	static int EenemyCount;
	static bool deathFlag;

	Enemy(); /*{ EenemyCount++; }*/
	~Enemy(); /*{ EenemyCount-- ; }*/
	
	void Death();
	bool GetDeathFlag();
};