#include <stdio.h>

int main(void)
{
	int num1, num2;
	char operator;

	printf("사칙연산 계산문제.\n");
	printf("+:더하기, -:빼기, *:곱하기, /:나누기\n\n");
	printf("정수형 숫자1 연산 정수형 숫자2 순서로 입력: ");
	scanf_s("%d %c %d", &num1, &operator, &num2);

	if (operator== '+')
		printf("\n%d %c %d = %d", num1, operator, num2, num1 + num2);
	else if (operator == '-')
		printf("\n%d %c %d = %d", num1, operator, num2, num1 - num2);
	else if (operator == '*')
		printf("\n%d %c %d = %d", num1, operator, num2, num1 * num2);
	else
		printf("\n%d %c %d = %d", num1, operator, num2, num1 / num2);

	return 0;
}