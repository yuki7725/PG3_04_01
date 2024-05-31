#include <stdio.h>
#include "enemy.h"

//フェーズの関数テーブル
void(Enemy::* Enemy::enemyTable[])() = {
	&Enemy::Func1,
	&Enemy::Func2,
	&Enemy::Func3
};

void Enemy::Update()
{
	//現在フェーズの関数を実行
	(this->*Enemy::enemyTable[i])();
	//行列を更新
	i++;
}

void Enemy::Func1() 
{
	printf("敵が接近\n");
}

void Enemy::Func2()
{
	printf("敵が射撃\n");
}

void Enemy::Func3()
{
	printf("敵が離脱\n");
}
