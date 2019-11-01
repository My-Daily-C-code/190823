#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	int i, j;

	/*2차원 배열 초기화의 예시 1번 */
	int arr1[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	/*2차원 배열 초기화의 예시 2번*/
	int arr2[3][3] = {
		{1},
		{4,5},
		{7,8,9}
	};

	/*2차원 배열 초기화의 예시 3번*/
	int arr3[3][3] = { 1, 2, 3, 4, 5, 6, 7 };


	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d", arr1[i][j]);
		printf("\n");
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d", arr2[i][j]);
		printf("\n");
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d", arr3[i][j]);
		printf("\n");
	}




	return 0;
}