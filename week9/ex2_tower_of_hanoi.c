#include <stdio.h>

void hanoi_top(int num, char source, char spare, char target)
{
	if (num > 0) {
		// num - 1 원반을 #source에서 #spare으로 이동
		hanoi_top(num - 1, source, target, spare);

		// num - 1 원반을 #source에서 #target으로 이동
		// if...else는 을/를 표기를 위해 사용
		if (num % 10 == 2 || num % 10 == 4 || num % 10 == 5 || num % 10 == 9)
			printf("원반 %d를 %c에서 %c로 옮깁니다.\n", num, source, target);
		else
			printf("원반 %d을 %c에서 %c로 옮깁니다.\n", num, source, target);

		// num - 1 원반을 #spare에서 #target으로 이동
		hanoi_top(num - 1, spare, source, target);
	}
}

int main(void)
{
	int num;

	printf("하노이탑 문제입니다.\n");
	printf("탑의 층수를 입력하세요: ");
	scanf_s("%d", &num);
	printf("\n");
	hanoi_top(num, 'A', 'B', 'C');
	return 0;
}
