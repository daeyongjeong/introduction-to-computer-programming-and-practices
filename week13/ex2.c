#include <stdio.h>

void get_odd_sum(int *arr);
void get_even_sum(int *arr);

int main(void)
{
	int input[10];
	int i;

	printf("입력한 값까지 짝수 or 홀수끼리의 합을 구하는 문제\n\n");
	printf("총 10개의 숫자 입력: ");

	for (i = 0; i < 10; i++)
		scanf("%d", &input[i]);
	printf("\n");

	get_odd_sum(input);
	get_even_sum(input);

	return 0;
}

void get_odd_sum(int *arr)
{
	int sum = 0;
	int i;

	printf("입력값 중 홀수: ");

	for (i = 0; i < 10; i++)
		if (*(arr + i) % 2 == 1) {
			printf("%d ", *(arr + i));
			sum += *(arr + i);
		}
	printf("\n");

	printf("입력값의 홀수 합: %d\n\n", sum);
}

void get_even_sum(int *arr)
{
	int sum = 0;
	int i;

	printf("입력값 중 짝수: ");

	for (i = 0; i < 10; i++)
		if (*(arr + i) % 2 == 0) {
			printf("%d ", *(arr + i));
			sum += *(arr + i);
		}
	printf("\n");

	printf("입력값의 짝수 합: %d\n\n", sum);
}