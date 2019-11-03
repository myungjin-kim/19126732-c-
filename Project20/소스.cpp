#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	double a, b;
	int c;
	
	printf("두 실수 입력: ");
	scanf("%lf %lf", &a, &b);

	printf("연산 종류 번호선택 1(+), 2(-), 3(*), 4(/): ");
	scanf("%d", &c);

	if (c == 1)
	{
		printf("%f + %f = %f", a, b, a + b);
	}
	if (c == 2)
	{
		printf("%f - %f = %f", a, b, a - b);
	}
	if (c == 3)
	{
		printf("%f * %f = %f", a, b, a * b);
	}
	if (c == 4)
	{
		printf("%f / %f = %f", a, b, a / b);
	}

}