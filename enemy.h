#pragma once

class Enemy {
public:
	
	void Update();
	void Func1(); //�ڋ�
	void Func2(); //�ˌ�
	void Func3(); //���E

private:
	
	static void(Enemy::*enemyTable[])();//�����o�֐��|�C���^�e�[�u��
	int i = 0;
};
