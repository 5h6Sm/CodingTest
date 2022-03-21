#include <stdio.h>

int main(void) {
	int a = 1;
	char munja = 'a';
	double sosu = 3.14;
	float sosu1 = 0.001592f;
	char mjyeol[] = "Hello World";
	//문자는 띄어쓰기 포함 11개, 실제 필요한 배열 길이 : 11+1 -> 12(null문자 포함)

	printf("정수 : %d, 문자 : %c, 더블 : %.2lf, 플롯 : %f\n", a, munja, sosu, sosu1);
	printf("문자열 : %s\n", mjyeol);
	
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