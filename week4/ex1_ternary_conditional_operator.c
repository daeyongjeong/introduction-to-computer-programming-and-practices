#include <stdio.h>

int main(void)
{
	int month;

	printf("달을 입력하면 상반기인지 하반기인지 출력해주는 문제\n\n");

	printf("이번 달을 입력하세요: ");
	scanf_s("%d", &month);

	printf("%d월은 %s입니다.\n", month, month <= 6 ? "상반기" : "하반기");

	return 0;
}