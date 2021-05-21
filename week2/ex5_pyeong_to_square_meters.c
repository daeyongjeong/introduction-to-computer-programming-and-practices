#include <stdio.h>

int main(void)
{
	double pyeong;
	const double conversion_factor = 3.305785;

	printf("평수를 입력하면 면적을 계산합니다.\n\n");
	printf("평수 입력: ");
	scanf("%lf", &pyeong);
	printf("입력된 평수: %.f평", pyeong);
	printf("변환 면적: %.2f제곱미터", pyeong * conversion_factor);

	return 0;
}