#include <stdio.h>

int main(void)
{
	int num1, num2;

	do {
		printf("두 정수 입력\n");
		printf("num1: ");
		scanf_s("%d", &num1);
		printf("num2: ");
		scanf_s("%d", &num2);
		printf("합계: %d\n\n", num1 + num2);
	} while (num1 != num2);

	printf("num1과 num2가 %d(으)로 일치\n", num1);
	printf("프로그램을 종료합니다.\n");
	return 0;
}
