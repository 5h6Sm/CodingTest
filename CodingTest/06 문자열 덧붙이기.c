#include <stdio.h>
#include <string.h>			//strlend() ȣ��

char my_strcat(char* str1, char* str2) {
	int str1_length = strlen(str1);
	int str2_length = strlen(str2);



	/*for (int i = str1_length; i < str1_length + str2_length; i++) {
		str1[i] = str2[i - str2_length];
	}*/
	for (int i = 0; i < str2_length; i++) {
		str1[str1_length + i] = str2[i];
	}

	return *str1;
}

int main(void) {

	char a[20] = "hello";
	char b[20] = "yello";

	//str1�� ���뿡 str2�� ������
	my_strcat(a, b);
	//helloyellow�� �������� ���ڴ�
	printf("%s", a);


	return 0;

}