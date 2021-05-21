#include <stdio.h>

void first_app()
{
	int i;

	printf("369 게임을 시작합니다. \n\n");

	for (i = 1; i <= 50; i++) {
		if (i / 10 == 3 && ((i % 10) == 3 || (i % 10) == 6 || (i % 10) == 9))
			printf("짝!짝!  ");
		else if (i / 10 == 3 || ((i % 10) == 3 || (i % 10) == 6 || (i % 10) == 9))
			printf("짝!  ");
		else
			printf("%d  ", i);
	}

	printf("\n");
	return;
}

void second_app()
{
	int i = 0, j = 0;

	printf("홀수 출력:\n");

	while (i < 100) {
		i++;
		if (i % 2 == 0)
			continue;
		printf("%d ", i);
	}

	printf("\n\n");
	printf("짝수 출력:\n");

	while (j < 100) {
		j++;
		if (j % 2 == 1)
			continue;
		printf("%d ", j);
	}

	printf("\n\n");
	return;
}

void third_app()
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
	return;
}

int main(void)
{
	int n;

	printf("실습문제 1~3번에서 푼 문제를 선택하는 문제\n");
	printf("1~3을 입력: ");
	scanf_s("%d", &n);
	printf("\n");

	switch (n) {
	case 1:
		printf("%d번을 선택하셨습니다.\n\n", n);
		first_app();
		break;
	case 2:
		printf("%d번을 선택하셨습니다.\n\n", n);
		second_app();
		break;
	case 3:
		printf("%d번을 선택하셨습니다.\n\n", n);
		third_app();
		break;
	default:
		printf("잘못 입력하셨습니다.\n프로그램을 종료합니다.\n");
		break;
	}

	return 0;
}
