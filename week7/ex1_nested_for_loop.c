#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 6 - i; j++)
			printf("  ");
		for (j = 0; j < 2 * i + 1; j++)
			printf(" *");
		printf("\n");
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < i; j++)
			printf("  ");
		for (j = 0; j < 13 - 2 * i; j++)
			printf(" *");
		printf("\n");
	}

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 1 - i; j++)
			printf("  ");
		for (j = 0; j < 11 + 2 * i; j++)
			printf(" *");
		printf("\n");
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4 + i; j++)
			printf("  ");
		for (j = 5; j > 2 * i; j--)
			printf(" *");
		printf("\n");
	}

	return 0;
}
