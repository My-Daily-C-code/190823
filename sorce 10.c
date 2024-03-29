#include<stdio.h>
#pragma warning (disable:4996)

void SwapIntptr(int **dp1, int **dp2)
{
	int *temp = *dp1;
	*dp1 = *dp2;
	*dp2 = temp;
}

int main()
{
	int num1 = 10, num2 = 20;
	int *ptr1, *ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("&ptr1, &ptr2: %d %d\n", *ptr1, *ptr2);

	SwapIntptr(&ptr1, &ptr2); // ptr1과 ptr2의 주소 값을 전달
	printf("&ptr1, &ptr2: %d %d\n", *ptr1, *ptr2);
	return 0;
}