#include <stdio.h>

int main(void)
{
	int num[3][4] = { 0 };
	int i, j;

	for (i = 0; i < 2; i++) {
		printf("%d행의 값 4개를 입력하세요: ", i);
		for (j = 0; j < 4; j++)
			scanf("%d", &num[i][j]);
	}

	for (j = 0; j < 4; j++)
		num[2][j] = num[0][j] + num[1][j];

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++)
			printf("%5d", num[i][j]);
		printf("\n");
	}

	return 0;
}
