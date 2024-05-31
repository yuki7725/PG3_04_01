#pragma once

class Enemy {
public:
	
	void Update();
	void Func1(); //接近
	void Func2(); //射撃
	void Func3(); //離脱

private:
	
	static void(Enemy::*enemyTable[])();//メンバ関数ポインタテーブル
	int i = 0;
};
