#include <stdio.h>
#include <string.h>

int main(void) {
	//배열은 20개의 공간을 가지지만, 문자의 길이는 3
	char str[20] = "YSY";

	//문자의 길이를 구하는 함수
	int length = strlen(str);
	printf("%d \n", length);

	//문자열 복사 strcpy(복사할 대상, 복사할 문자열)
	char copy_str[15];
	strcpy(copy_str, str);
	printf("%s \n", copy_str);

	//문자열 덧붙이기 strcat(덧붙일 대상, 덧붙일 문자열)
	strcat(copy_str, "BLY");
	printf("%s \n", copy_str);

	//문자열이 같은지 비교하기 strcmp(비교대상1, 비교대상2)
	if (strcmp(str, "YSY") == 0)
		printf("양서영입니다. \n");
	else printf("양서영이 아닙니다.\n");

	//문제1 문자열의 길이 구하기
	char str2[30] = "samgyetang";

	int length2 = strlen(str2);
	printf("삼계탕의 길이는 %d\n", length2);
	
	//문제2 copy_str2에 "iceshu" 집어넣기(복사하기)
	char copy_str2[30];
	strcpy(copy_str2, "iceshu");
	printf("복사한 문자열은 %s \n", copy_str2);

	//문제3 copy_str2에 "delicious" 덧붙이기
	strcat(copy_str2, "delicious");
	printf("덧붙인 문자열은 %s \n", copy_str2);

	//문제4 "BMW"와 "benz"의 두 문자열이 같은 다른지를 판별
	if (strcmp("BMW", "benz") == 0)
		printf("두 문자열은 같습니다.\n");
	else printf("두 문자열은 같지않습니다.\n");

}