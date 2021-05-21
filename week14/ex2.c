#include <stdio.h>
#define SIZE 10

void set_score(int *score);
void get_rank(int *score, int *rank);
void print_rank(int *score);

int main(void)
{
	int score[SIZE] = { 0 };

	printf("10명의 학생들의 C언어 점수를 입력받고 학생들의 석차를 구하는 문제\n\n");

	printf("========== 학생의 C언어 점수 입력부 ==========\n\n");
	set_score(score);
	printf("\n");

	printf("========== 학생의 C언어 석차 출력부 ==========\n\n");
	print_rank(score);
	printf("\n");
}

void set_score(int *score)
{
	int i;

	for (i = 0; i < SIZE; i++) {
		printf("%2d번째 학생의 C언어 점수 입력: ", i + 1);
		scanf_s("%d", score++);
	}
}

void get_rank(int *score, int *rank)
{
	int i, j;

	for (i = 0; i < SIZE; i++)
		for (j = 0; j < SIZE; j++)
			if (*(score + i) < *(score + j) && i != j)
				(*(rank + i))++;
}

void print_rank(int *score)
{
	int rank[SIZE] = { 0 };
	int i;

	get_rank(score, rank);

	for (i = 0; i < SIZE; i++)
		printf("%2d번 학생의 점수: %3d, 등수: %2d\n",
			i + 1, *(score + i), *(rank + i) + 1);
}
