#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);
	printf("\n");

	printf("덧셈: %d + %d = %d입니다.\n", num1, num2, num1 + num2);
	printf("뺄셈: %d - %d = %d입니다.\n", num1, num2, num1 - num2);
	printf("곱셈: %d x %d = %d입니다.\n", num1, num2, num1 * num2);
	printf("몫: %d / %d의 몫은 %d입니다.\n", num1, num2, num1 / num2);
	printf("나머지: %d / %d의 나머지는 %d입니다.\n", num1, num2, num1 % num2);

	return 0;
}