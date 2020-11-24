// ex_1_main.cpp
#include <iostream>
#define CPP2_PRIME_UPPER_LIMIT 1000000 //�T������l�̏���l�B
/* --------------------------------------------------------------- */
/*
* nth_prime
*
* �^����ꂽ������ a �� d �� n �ɑ΂��āA���̓�������Ɋ܂܂�� n �Ԗڂ�
* �f����Ԃ��B
*
* TODO: ���� nth_prime �֐�����������B�K�v�ł���Α��Ɋ֐���
* �t�@�C�����쐬����B
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
	// �ȉ��A���l�ɁA���o�͗�ʂ�ɂȂ邩�m�F����B
	return 0;
}
