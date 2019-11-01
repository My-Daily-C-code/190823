#include<stdio.h>
#pragma warning (disable:4996)

void SwapIntPtr(int *p1, int *p2)
{
	int *temp = p1;
	p1 = p2;
	p2 = temp;
}

int main()
{
	int num1 = 10, num2 = 20;
	int *ptr1, *ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1, *ptr2: %d %d\n", *ptr1, *ptr2);

	SwapIntPtr(ptr1, ptr2);
	printf("*ptr1, *ptr2: %d %d\n", *ptr1, *ptr2);
	return 0;

}

// pointer varience ����� call by reference