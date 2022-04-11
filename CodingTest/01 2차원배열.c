#include <stdio.h>

int main(void) {
	int arr[3][4] = { 
		{1, 2, 3, 4},		//[0][0] : 1, [0][1] : 2, [0][2] : 3
		{5, 6, 7, 8},		//[1][0] : 4, [1][1] : 5, [1][2] : 6
		{9, 10, 11 ,12},		//[2][0] : 7, [2][1] : 8, [2][2] : 9
		
	};

	/*for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		for (int j = 0; j < sizeof(arr[i]) / sizeof(arr[0][0]); j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
		
	}*/

	for (int i = 0; i < 3; i++) {
		printf("%3d ", arr[i][0]);
		printf("%3d ", arr[i][1]);
		printf("%3d ", arr[i][2]);
		printf("%3d ", arr[i][3]);
		printf("\n");
	}
	/*
	printf("%d ", arr[0][0]);
	printf("%d ", arr[0][1]);
	printf("%d ", arr[0][2]);
	printf("%d ", arr[0][3]);
	printf("\n");
	printf("%d ", arr[1][0]);
	printf("%d ", arr[1][1]);
	printf("%d ", arr[1][1]);
	printf("%d ", arr[1][3]);
	printf("\n");
	printf("%d ", arr[2][0]);
	printf("%d ", arr[2][1]);
	printf("%d ", arr[2][1]);
	printf("%d ", arr[2][3]);


	*/
}