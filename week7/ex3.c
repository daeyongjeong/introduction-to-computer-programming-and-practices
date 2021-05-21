#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;

	while (1) {
		puts("하나");
		a++;
		do {
			puts("둘");
			if (a == 1) break;
		} while (1);
		puts("셋");
		for (;;) {
			puts("넷");
			b++;
			if (b != 1) {
				puts("다섯");
				break;
			}
			puts("여섯");
		}
		puts("일곱");
		if (1) break;
		puts("여덟");
	}
	puts("종료");

	return 0;
}
