#include <stdio.h>
#include "enemy.h"

int main() {

	//関数呼び出し
	Enemy enemy;
	for (int i = 0; i < 3; i++) {
		enemy.Update();
	}

	return 0;
}