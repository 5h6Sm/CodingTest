#include <stdio.h>
#include <string.h>			//strlend() 호출

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

	//str1의 내용에 str2를 덧붙임
	my_strcat(a, b);
	//helloyellow가 나왔으면 좋겠다
	printf("%s", a);


	return 0;

}