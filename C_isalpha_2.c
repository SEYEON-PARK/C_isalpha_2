#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a;
	
	printf("아무거나 한 개 입력하세요. : ");
	scanf_s("%c", &a);
	
	if (isalpha(a) != 0)
	{
		printf("입력하신 것은 알파벳입니다.\n");
	}
	else
	{
		printf("입력하신 것은 알파벳이 아닙니다.\n");
	}

	return 0;
}