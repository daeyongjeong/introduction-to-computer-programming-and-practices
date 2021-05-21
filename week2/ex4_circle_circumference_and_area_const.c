#include <stdio.h>

int main(void)
{
	int rad;
	const double pi = 3.14;

	printf("반지름 값 입력: ");
	scanf("%d", &rad);
	printf("r이 %d인 원의 둘레는: %.2f 입니다.\n", rad, 2 * pi * rad);
	printf("r이 %d인 원의 넓이는: %.2f 입니다.\n", rad, pi * rad * rad);

	return 0;
}