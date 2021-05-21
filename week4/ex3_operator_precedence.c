#include <stdio.h>

int main(void)
{
	int temp = 1, num1, num2, result;

	printf("두 정수 입력: ");
	scanf_s("%d %d", &num1, &num2);

	result = (num1 < num2 && temp++ == 1);
	printf("temp = %d, True or False: %d\n\n", temp, result);

	result = (num1 > num2 && --temp == 0);
	printf("temp = %d, True or False: %d\n\n", temp, result);

	return 0;
}