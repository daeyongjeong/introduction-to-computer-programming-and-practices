#include <stdio.h>

int main(void)
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
	return 0;
}
