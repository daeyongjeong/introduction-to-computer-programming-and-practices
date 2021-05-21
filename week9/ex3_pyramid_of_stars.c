#include <stdio.h>

void pyramid(int num)
{
	int i, j;
	for (i = 0; i < num; i++) {
		for (j = 1; j < num - i; j++)
			printf(" ");
		for (j = 0; j < i * 2 + 1; j++)
			printf("*");
		printf("\n");
	}
}

int main(void)
{
	int num;

	printf("라인을 몇 줄로 할지 입력: ");
	scanf_s("%d", &num);
	pyramid(num);
	return 0;
}
