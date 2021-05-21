#include <stdio.h>

typedef struct _pos {
	int n;
	int m;
} Pos;

void show_array(int arr[3][4]);
int get_num(int arr[3][4], Pos *pos);

int main(void)
{
	int odd_arr[3][4];
	int even_arr[3][4];
	int i;

	Pos odd_pos, even_pos;

	// 배열 초기화
	for (i = 0; i < 12; i++) {
		*(*odd_arr + i) = i * 2 + 1;
		*(*even_arr + i) = (i + 1) * 2;
	}

	printf("배열의 위치에 있는 값 중 원하는 위치 값을 더하는 문제\n\n");

	printf("현재 각 배열에 저장된 값\n");
	printf("================홀수 배열================\n");
	show_array(odd_arr);

	printf("================짝수 배열================\n");
	show_array(even_arr);

	printf("홀수 배열에서의 값의 위치 선택(n행 m열): ");
	scanf("%d %d", &odd_pos.n, &odd_pos.m);
	printf("\n");

	printf("짝수 배열에서의 값의 위치 선택(n행 m열): ");
	scanf("%d %d", &even_pos.n, &even_pos.m);
	printf("\n");

	printf("입력한 홀수 배열의 %d, %d에 위치한 값 = %d\n",
		odd_pos.n, odd_pos.m, get_num(odd_arr, &odd_pos));
	printf("입력한 짝수 배열의 %d, %d에 위치한 값 = %d\n",
		even_pos.n, even_pos.m, get_num(even_arr, &even_pos));
	printf("두 값의 합 = %d\n\n",
		get_num(odd_arr, &odd_pos) + get_num(even_arr, &even_pos));

	return 0;
}

void show_array(int arr[3][4])
{
	int i, j;

	printf("        1열     2열     3열     4열\n");

	for (i = 0; i < 3; i++) {
		printf("%d행     ", i + 1);
		for (j = 0; j < 4; j++)
			printf("%2d      ", arr[i][j]);
		printf("\n");
	}
	printf("\n");
}

int get_num(int arr[3][4], Pos *pos)
{
	return arr[pos->n - 1][pos->m - 1];
}