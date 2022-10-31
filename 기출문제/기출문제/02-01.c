#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

const int max_product_number = 10;

// 제품 번호별로 몇 개씩 있는지 개수를 셉니다.
// gloves : 가지고 있는 장갑list
// gloves_len : gloves의 길이

int* func_a(int gloves[], int gloves_len) {
    int* counter = (int*)malloc(sizeof(int) * (max_product_number + 1));
    for (int i = 0; i <= max_product_number; ++i)
        counter[i] = 0;

    //counter[glove[0]]++;
    //counter[glove[1]]++;
    //counter[glove[2]]++;
    //counter[glove[3]]++;
    //counter[glove[4]]++;

    for (int i = 0; i < gloves_len; ++i)
        counter[i]++;

    return counter;
}

int solution(int left_gloves[], int left_gloves_len, int right_gloves[], int right_gloves_len) {
    // 1. 왼손장갑이 제품 번호별로 몇 개씩 있는지 개수를 셉니다.
    int* left_counter = func_a(left_gloves, left_gloves_len);
    // 2. 오른손장갑이 제품 번호별로 몇 개씩 있는지 개수를 셉니다.
    int* right_counter = func_a(right_gloves, right_gloves_len);
    int total = 0;
    for (int i = 1; i <= max_product_number; ++i)
        total += min(left_counter[i], right_counter[i]);
    return total;
}   

int main() {
    int left_gloves[5] = { 2, 1, 2, 2, 4 };
    int left_gloves_len = 5;
    int right_gloves[6] = { 1, 2, 2, 4, 4, 7 };
    int right_gloves_len = 6;
    int ret = solution(left_gloves, left_gloves_len, right_gloves, right_gloves_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}