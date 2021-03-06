#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//answer 사이즈 신청결과를 담고있는 배열
//[0] : "XS" 사이즈 신청자 수
//[1] : "S" 사이즈 신청자 수
//[2] : "M" 사이즈 신청자 수
//[3] : "L" 사이즈 신청자 수
//[4] : "XL" 사이즈 신청자 수
//[5] : "XXL" 사이즈 신청자 수

int* solution(char* shirt_size[], int shirt_size_len) {
	int arr[6] = { 0,0,0,0,0,0 };
	int* answer = arr;
	
	// shirt_size에 있는 모든 원소를 뒤져서 counting
	
	for (int i = 0; i < shirt_size_len; i++) {
		// shirt_size[i]가 "XS"면 answer[0]++
		if (strcmp(shirt_size[i], "XS") == 0)
			answer[0]++;
		// shirt_size[i]가 "S"면 answer[1]++
		else if (strcmp(shirt_size[i], "XS") == 0)
			answer[0]++;
		// shirt_size[i]가 "M"면 answer[2]++
		else if (strcmp(shirt_size[i], "XS") == 0)
			answer[0]++;
		// shirt_size[i]가 "L"면 answer[3]++
		else if (strcmp(shirt_size[i], "XS") == 0)
			answer[0]++;
		// shirt_size[i]가 "XL"면 answer[4]++
		elseif (strcmp(shirt_size[i], "XS") == 0)
			answer[0]++;
		// shirt_size[i]가 "XXL"면 answer[5]++

	}
	
	return answer;
}]

int main() {
	char* shirt_size[] = { "XS", "S", "L", "L", "XL", "S" };
	int shirt_size_len = 6;
	int* ret = solution(shirt_size, shirt_size_len);

	printf("solution 함수의 반환 값은 {");
	for (int i = 0; i < 6; i++) {
		if (i != 0) printf(", ");
		printf("%d", ret[i]);
	}
	printf("} 입니다.\n");
}
