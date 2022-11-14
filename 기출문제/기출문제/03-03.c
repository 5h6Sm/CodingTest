#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int scores[], int scores_len) {
	int answer = 0;
	int temp = 0;
	for (int i = 0; i < scores_len; i++) {
		for (int j = 0; j < scores_len - 1; j++) {
			if (scores[j] > scores[j + 1]) {
				temp = scores[j];
				scores[j] = scores[j + 1];
				scores[j + 1] = temp;
			}
		}
	}
	for (int i = 1; i < scores_len - 1; i++) {
		answer += scores[i];
	}
	answer = (int)answer / (scores_len - 2);
	return answer;
}

int main() {
	int scores1[10] = { 35, 28, 98, 34, 20, 50, 85, 74, 71, 7 };
	int scores1_len = 10;
	int ret1 = solution(scores1, scores1_len);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

	int scores2[5] = { 1, 1, 1, 1, 1 };
	int scores2_len = 5;
	int ret2 = solution(scores2, scores2_len);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}