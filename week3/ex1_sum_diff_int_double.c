#include <stdio.h>

int main(void)
{
	int a = 3, b = 21;
	double c = 18.03, d = 3.21;

	int sum1 = a + b, diff1 = a - b;
	double sum2 = c + d, diff2 = c - d;

	puts("");

	printf("두 정수의 합 ");
	putchar('=');
	printf(" %6d\n", sum1);

	printf("두 정수의 차 ");
	putchar('=');
	printf(" %6d\n", diff1);

	puts("");

	printf("두 실수의 합 ");
	putchar('=');
	printf(" %6.2f\n", sum2);

	printf("두 실수의 합 ");
	putchar('=');
	printf(" %6.3f\n", diff2);

	puts("");

	return 0;
}
