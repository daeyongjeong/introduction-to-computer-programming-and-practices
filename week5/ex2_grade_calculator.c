#include <stdio.h>

int main(void)
{
	int score;

	printf("점수를 입력: ");
	scanf_s("%d", &score);

	if (score >= 60) {
		if (score >= 65) {
			if (score >= 70) {
				if (score >= 75) {
					if (score >= 80) {
						if (score >= 85) {
							if (score >= 90) {
								if (score >= 95) {
									printf("\n학점은 A+입니다.\n\n");
									return 0;
								}
								printf("\n학점은 A0입니다.\n\n");
								return 0;
							}
							printf("\n학점은 B+입니다.\n\n");
							return 0;
						}
						printf("\n학점은 B0입니다.\n\n");
						return 0;
					}
					printf("\n학점은 C+입니다.\n\n");
					return 0;
				}
				printf("\n학점은 C0입니다.\n\n");
				return 0;
			}
			printf("\n학점은 D+입니다.\n\n");
			return 0;
		}
		printf("\n학점은 D0입니다.\n\n");
		return 0;
	}
	printf("\n학점은 F입니다.\n\n");

	return 0;
}