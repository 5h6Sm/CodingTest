#include <stdio.h>

int main(void) {
	int a = 1;
	char munja = 'a';
	double sosu = 3.14;
	float sosu1 = 0.001592f;
	char mjyeol[] = "Hello World";
	//���ڴ� ���� ���� 11��, ���� �ʿ��� �迭 ���� : 11+1 -> 12(null���� ����)

	printf("���� : %d, ���� : %c, ���� : %.2lf, �÷� : %f\n", a, munja, sosu, sosu1);
	printf("���ڿ� : %s\n", mjyeol);
	
	printf("%c", mjyeol[0]);
	printf("%c", mjyeol[1]);
	printf("%c", mjyeol[2]);
	printf("%c", mjyeol[3]);
	printf("%c", mjyeol[4]);
	printf("%c", mjyeol[5]);
	printf("%c", mjyeol[6]);
	printf("%c", mjyeol[7]);
	printf("%c", mjyeol[8]);
	printf("%c", mjyeol[9]);
	printf("%c", mjyeol[10]);
	printf("%c", mjyeol[11]);



}