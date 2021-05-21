#include <stdio.h>

void fibo(int n)
{
	int temp;
	int num1 = 0, num2 = 1;
	int i;

	printf("\n");
	if (n == 0) {
		printf("0 ");
	} else if (n == 1) {
		printf("1 ");
	} else {
		for (i = 0; i < n; i++) {
			printf("%d ", num1);
			temp = num1;
			num1 += num2;
			num2 = temp;
		}
	}
	printf("\n\n");
}

int main(void)
{
	int num;

	printf("몇 단계의 피보나치 수열을 수행할 지 입력: ");
	scanf_s("%d", &num);
	fibo(num);
	return 0;
}
