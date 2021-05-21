#include <stdio.h>

int main(void)
{
	int year, month, day, result;
	int count1 = 0, count2 = 0;
	int i, loop = 0;

	while (loop < 2) {
		printf("년도를 입력하세요: ");
		scanf_s("%d", &year);
		printf("월을 입력하세요: ");
		scanf_s("%d", &month);
		printf("일을 입력하세요: ");
		scanf_s("%d", &day);

		for (i = 1; i < year; i++) {
			if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
				count1++;
		}

		for (i = 1; i < month; i++) {
			if (i == 2)
				count2 += 28;
			else if (i == 4 || i == 6 || i == 9 || i == 11)
				count2 += 30;
			else
				count2 += 31;
		}

		result = 365 * (year - 1) + count1 + count2 + day;
		printf("%04d년 %02d월 %02d일은 서기 1년 1월 1일부터 총 %d째 되는 날입니다.\n\n", year, month, day, result);

		count1 = 0;
		count2 = 0;
		loop++;
	}

	return 0;
}