#include <stdio.h>

int main(void) {

	//이차원배열 아무거나 만들어보고 각각의 원소를 출력하기

	/*
	int arr[5][5] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20},
		{21,22,23,24,25}
	};

	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
		for (int j = 0; j < sizeof(arr[i])/sizeof(arr[0][0]); j++) {
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	*/

	//문자열의 길이 출력하기

	/*int count = 0;
	char str[30] = "Hello";

	for (int i = 0; i < sizeof(str); i++) {
		if (str[i] == '\0') {
			break;
		}
		count++;
	}*/

	/*char str[] = "Hello World";
	for (int i = 0; str[i] != '\0'; i++) {
		printf("%c", str[i]);
	}*/

	char str[30] = "Hello";
	int length = 0;

	for (int i = 0; i < 30; i++) {
		if (str[i] != '\0')
			length++;
	}
	printf("길이는 %d", length);

	//int count = 0;
	//for (int i = 0; str[i] != '\0'; i++) {
	//	printf("%c", str[i]);
	//	count++;
	//}
	//printf("\n%d\n", count);

	//int j = 0;
	//for (;;) {
	//	if (str[j] == '\0') break;
	//	printf("%c", str[j]);
	//	j++;
	//}
	//printf("\n%d\n", j);

	return 0;

}