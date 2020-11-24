// ex_1_main.cpp
#include <iostream>
#define CPP2_PRIME_UPPER_LIMIT 1000000 //探索する値の上限値。
/* --------------------------------------------------------------- */
/*
* nth_prime
*
* 与えられた正整数 a と d と n に対して、この等差数列に含まれる n 番目の
* 素数を返す。
*
* TODO: この nth_prime 関数を実装せよ。必要であれば他に関数や
* ファイルを作成せよ。
*/
/* -------------------------------------------------------------- */
bool is_prime(int num) {
	for (int i = 2; i <= num - 1; i++) {
		if (num % i == 0)
			return false;
	}
	return true;
}

int nth_prime(unsigned int a, unsigned int d, unsigned int n)
{
	int current = a;
	int count = 0;
	while (current < CPP2_PRIME_UPPER_LIMIT) {
		if (is_prime(current)) {
			count++;
			if (count == n) {
				return current;
			}
		}
		current += d;
	}
	return(-1);
};

int main()
{
	std::cout << nth_prime(367, 186, 151) << std::endl;
	// 以下、同様に、入出力例通りになるか確認せよ。
	return 0;
}
