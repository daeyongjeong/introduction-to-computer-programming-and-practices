#include <stdio.h>

void get_sum(int x[][5]);             // 표의 가로 합과 세로 합을 계산하는 함수
void print(int x[][5], int m, int n);   // 출력결과를 확인

int main(void)
{
	int arr[][5] = { {78, 48, 78, 98, 0}, {99, 92, 83, 29, 0},
			{29, 64, 83, 89, 0}, {34, 78, 92, 56, 0}, {0, 0, 0, 0, 0} };

	printf("표의 세로와 가로 합, 그리고 모든 합을 구합니다.\n\n");
	print(arr, 4, 5);
	get_sum(arr);

	printf("위 표의 세로와 가로 합, 그리고 모든 합을\n");
	printf("각각 행과 열의 마지막에 구합니다.\n\n");
	print(arr, 5, 5);

	return 0;
}

void get_sum(int x[][5])
{
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			x[i][4] += x[i][j];
			x[4][j] += x[i][j];
			x[4][4] += x[i][j];
		}
	}
}

void print(int x[][5], int m, int n)
{
	int i, j;

	for (j = 0; j < n; j++)
		printf("------");
	printf("--\n");

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (x[i][j] == 0)
				break;
			printf("|%4d ", x[i][j]);
		}
		printf("| \n");
	}

	for (j = 0; j < n; j++)
		printf("------");
	printf("--\n\n");
}
