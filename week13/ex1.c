#include <stdio.h>
#include <string.h>

void encrypt(char *arr, int *key);
void decrypt(char *arr, int *key);

int main(void)
{
	int crypto[7] = { 2, 5, 5, 8, 3, 1, 8 };
	char input[8];

	printf("문자열을 입력받고 그 문자열을 암호화, 복호화하는 문제\n");
	printf("암호와와 복호화 할 때 사용되는 키 값은 2, 5, 5, 8, 3, 1, 8로 동일\n\n");

	printf("암호화 할 문자열 입력: ");
	scanf("%s", input);
	
	if (strlen(input) != 7) {
		printf("입력 오류!\n\n");
		return -1;
	}

	encrypt(input, crypto);
	decrypt(input, crypto);
	printf("\n");

	return 0;
}

void encrypt(char *arr, int *key)
{
	int i;
	
	for (i = 0; i < 7; i++)
		*(arr + i) += *(key + i);

	printf("암호화 결과: %s\n", arr);
}

void decrypt(char *arr, int *key)
{
	int i;
	
	for (i = 0; i < 7; i++)
		*(arr + i) -= *(key + i);
	
	printf("복호화 결과: %s\n", arr);
}