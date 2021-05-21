#include <stdio.h>

int main(void)
{
	int celsius;
	float fahrenheit;

	printf("섭씨 온도 입력 -> 화씨 온도 출력 프로그램\n\n");
	printf("섭씨 온도: ");
	scanf_s("%d", &celsius);
	fahrenheit = (9.0 / 5.0) * (float)celsius + 32.0;
	printf("섭씨 온도 -> 화씨 온도: %.2f\n\n", fahrenheit);

	return 0;
}
