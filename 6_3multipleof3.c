#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n;

	printf("정수 입력: ");
	scanf("%d", &n);

	if (n % 3)
	{
		printf("입력된 %d는 3의 배수가 아닙니다.\n", n);
	}
	else
	{
		printf("입력된 %d는 3의 배수입니다.\n", n);
	}
	printf("조건식 %d %% 3의 결과는 %d입니다.\n", n, n % 3);
	
	return 0;
}