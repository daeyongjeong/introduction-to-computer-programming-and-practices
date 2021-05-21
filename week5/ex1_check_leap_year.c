#include <stdio.h>

int main(void)
{
	int year;

	printf("윤년 계산 문제\n\n");
	printf("연도를 입력하세요: ");
	scanf_s("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("\n입력한 %d연도는 윤년입니다.\n", year);
	else
		printf("\n입력한 %d연도는 평년입니다.\n", year);

	return 0;
}
