#include <stdio.h>
#include "enemy.h"

//�t�F�[�Y�̊֐��e�[�u��
void(Enemy::* Enemy::enemyTable[])() = {
	&Enemy::Func1,
	&Enemy::Func2,
	&Enemy::Func3
};

void Enemy::Update()
{
	//���݃t�F�[�Y�̊֐������s
	(this->*Enemy::enemyTable[i])();
	//�s����X�V
	i++;
}

void Enemy::Func1() 
{
	printf("�G���ڋ�\n");
}

void Enemy::Func2()
{
	printf("�G���ˌ�\n");
}

void Enemy::Func3()
{
	printf("�G�����E\n");
}
