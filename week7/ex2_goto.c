#include <stdio.h>

int main(void) {
	int num;

	printf("goto문 실습\n\n");

start:
	printf("정수 입력: ");
	scanf_s("%d", &num);

	if (num == 1) {
		printf("%d을 입력했습니다.\n", num);
		printf("다시 처음으로\n\n");
		goto start;
	}
	else if (num == 2) {
		printf("%d를 입력했습니다.\n", num);
		printf("다시 처음으로\n\n");
		goto start;
	}
	else {
		printf("1 또는 2가 아닌 수를 입력했기에 종료합니다.\n\n");
	}

	return 0;
}
