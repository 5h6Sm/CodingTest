#include <stdio.h>
#include <stdlib.h>

// 동적할당 : 메모리 할당 크기가 실행시간(runtime)에 결정
// 정적할당 : 메모리 할당 크기가 컴파일 시간에 결정

int main(void) {
	char str[10];
	int num;
	scanf("%d", &num);

	char* str2 = malloc(sizeof(char) * num);
}