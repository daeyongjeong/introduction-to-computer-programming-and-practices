#include <stdio.h>

int main(void)
{
	double kilometer, mile;

	printf("킬로미터 수를 입력하면 마일로 변환합니다.\n\n");
	printf("킬로미터 입력: ");
	scanf_s("%lf", &kilometer);
	printf("입력한 km 수: %.3f\n", kilometer);
	mile = kilometer / 1.609344;
	printf("입력한 km -> mile: %.2f\n\n", mile);

	return 0;
}
