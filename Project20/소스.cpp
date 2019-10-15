#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	printf("4자리 정수를 입력하여라: ");

	scanf("%d", &num);

	printf("%10d\n", num);
	printf("%010d\n", num);
	printf("%0+10d\n", num);
	printf("%-10d\n", num);
	printf("%10o\n", num);
	printf("%0#10o\n", num);
	printf("%10x\n", num);
	printf("%0#10x\n", num);

}