#include <stdio.h>

//배열 요소 중 최대값과 그에 해당하는 idx값을 구하시오

void getMax(int* arr, int length) {
	int temp = -1, idx = 99; //max

	for (int i = 0; i < length; i++) {
		if (arr[i] > temp) {
			temp = arr[i];
			idx = i;
		}	
	}
	printf("인덱스 번호는 %d, ", idx);
	printf("최대값은 %d 입니다.", temp);
}

void getMin(int* arr, int length) {
	int temp = 99, idx = 99; //min

	for (int i = 0; i < length; i++) {
		if (arr[i] < temp) {
			temp = arr[i];
			idx = i;
		}
	}
	printf("인덱스 번호는 %d, ", idx);
	printf("최소값은 %d 입니다.", temp);

}


int main(void) {
	int arr[10] = { 5, 9, 15, 6, 2, 3, 4, 8, 9, 10};

	getMax(arr, sizeof(arr)/sizeof(arr[0]));
	printf("\n");

	getMin(arr, sizeof(arr)/sizeof(arr[0]));
	
	return 0;

}
/*if (arr[0] > temp) {
	temp = arr[0];
	idx = 0;
}
if (arr[1] > temp) {
	temp = arr[1];
	idx = 1;
}

if (arr[2] > temp) {
	temp = arr[2];
	idx = 2;
}

if (arr[3] > temp) {
	temp = arr[3];
	idx = 3;
}

if (arr[4] > temp) {
	temp = arr[4];
	idx = 4;
}

if (arr[5] > temp) {
	temp = arr[5];
	idx = 5;
}

if (arr[6] > temp) {
	temp = arr[6];
	idx = 6;
}

if (arr[7] > temp) {
	temp = arr[7];
	idx = 7;
}
if (arr[8] > temp) {
	temp = arr[8];
	idx = 8;
}

if (arr[9] > temp) {
	temp = arr[9];
	idx = 9;
}


printf("%d", idx);*/