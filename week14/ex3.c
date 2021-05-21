#include <stdio.h>
#define SIZE 20

void case_convert(char *string)
{
	int i;

	for (i = 0; *(string + i) != '\0'; i++) {
		if (65 <= *(string + i) && *(string + i) <= 90)
			*(string + i) += 32;
		else if (97 <= *(string + i) && *(string + i) <= 122)
			*(string + i) -= 32;
	}
}

int main(void)
{
	char name[SIZE];
	char *ptr = name;

	printf("본인의 영문이름을 대소문자 섞어서 입력하면\n");
	printf("대문자 -> 소문자. 소문자 -> 대문자로 변환하는 문제\n\n");

	printf("영문이름 입력: ");
	scanf_s("%s", name, 20);
	printf("\n");

	printf("입력한 영문이름의 원본: %s\n\n", ptr);

	case_convert(ptr);
	printf("소문자 -> 대문자, 대문자 -> 소문자 결과: %s\n\n", ptr);

	return 0;
}
