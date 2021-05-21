#include <stdio.h>

int main(void)
{
	int i;

	printf("369 게임을 시작합니다. \n\n");

	for (i = 1; i <= 50; i++) {
		if (i / 10 == 3 && ((i % 10) == 3 || (i % 10) == 6 || (i % 10) == 9))
			printf("짝!짝!  ");
		else if (i / 10 == 3 || ((i % 10) == 3 || (i % 10) == 6 || (i % 10) == 9))
			printf("짝!  ");
		else
			printf("%d  ", i);
	}

	printf("\n");
	return 0;
}
