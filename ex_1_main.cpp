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
bool is_prime(int num){
	return true;
}

int nth_prime(unsigned int a, unsigned int d, unsigned int n) 
{
	int num = a;
	while (num <= CPP2_PRIME_UPPER_LIMIT) {
		std::cout << num << std::endl;
		num += d;
	}
	return(-1);
};

int main()
{
	std::cout << is_prime(5) << std::endl;
	std::cout << is_prime(6) << std::endl;
	// �ȉ��A���l�ɁA���o�͗�ʂ�ɂȂ邩�m�F����B
    return 0;
}
