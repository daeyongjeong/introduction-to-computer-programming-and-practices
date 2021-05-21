#include <stdio.h>
#define SIZE 5

void set_score(int *score);
int get_score_sum(int *score);
float get_score_avg(int *score);

int main(void)
{
	int score[SIZE] = { 0 };

	printf("5명의 학생들의 C언어 점수를 입력받고 점수의 합계와 평균을 구하는 문제\n\n");

	set_score(score);

	printf("\n");
	printf("%d명의 학생들의 점수 합계 = %d\n\n", SIZE, get_score_sum(score));
	printf("%d명의 학생들의 점수 평균 = %.2f\n\n", SIZE, get_score_avg(score));

	return 0;
}

void set_score(int *score)
{
	int i;

	for (i = 0; i < SIZE; i++) {
		printf("%d번째 학생의 C언어 점수 입력: ", i + 1);
		scanf_s("%d", score + i);
		printf("%d\n", *(score + i));
	}
}

int get_score_sum(int *score)
{
	int i;
	int sum = 0;

	for (i = 0; i < SIZE; i++)
		sum += *(score + i);

	return sum;
}

float get_score_avg(int *score)
{
	return get_score_sum(score) / SIZE;
}
