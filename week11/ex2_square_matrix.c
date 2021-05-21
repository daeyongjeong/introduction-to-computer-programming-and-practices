#include <stdio.h>
#define MAX 10

int main(void)
{
	int arr[MAX][MAX] = { 0 };
	int num;
	int i, j;

	printf("정방행렬의 크기를 입력하세요? ");
	scanf("%d", &num);

	// num은 1부터 10까지의 자연수
	if (num > MAX || num < 1) {
		puts("Error!");
		return -1;
	}

	for (i = 0; i < num; i++)
		arr[i][i] = 1;

	for (i = 0; i < num; i++) {
		for (j = 0; j < num; j++)
			printf("%3d", arr[i][j]);
		printf("\n");
	}

	return 0;
}
