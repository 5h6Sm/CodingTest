#include <stdio.h>

int main(void) {

	//�������迭 �ƹ��ų� ������ ������ ���Ҹ� ����ϱ�

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

	//���ڿ��� ���� ����ϱ�

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
	printf("���̴� %d", length);

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