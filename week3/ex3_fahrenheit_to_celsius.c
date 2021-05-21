#include <stdio.h>

int main(void)
{
	double fahrenheit;
	int celsius;

	printf("화씨 온도 입력 -> 섭씨 온도 출력 프로그램\n\n");
	printf("화씨 온도: ");
	scanf_s("%lf", &fahrenheit);
	celsius = (int)((fahrenheit - 32) / 1.8);
	printf("화씨 온도 -> 섭씨 온도: %d\n\n", celsius);

	return 0;
}
