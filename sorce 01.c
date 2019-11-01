#include <stdio.h>

int main()

{

	int arr1[3][4];
	int arr2[7][9];
	printf("세로3, 가로 4: %d\n", sizeof(arr1));
	printf("세로7, 가로 9: %d\n", sizeof(arr2));
	return 0;
}
// sizeof 연산자를 이용하여 2차원 배열 크기를 계산 한 것