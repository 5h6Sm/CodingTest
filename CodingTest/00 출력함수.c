#include <stdio.h>

int main(void) {
	int a = 1;
	char munja = 'a';
	double sosu = 3.14;
	float sosu1 = 0.001592f;
	char mjyeol[15] = "Hello World";
	//���ڴ� ���� ���� 11��, ���� �ʿ��� �迭 ���� : 11+1 -> 12(null���� ����)

	printf("���� : %d, ���� : %c, ���� : %.2lf, �÷� : %f\n", a, munja, sosu, sosu1);
	printf("���ڿ� : %s", mjyeol);

}