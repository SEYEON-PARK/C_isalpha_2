#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a;
	
	printf("�ƹ��ų� �� �� �Է��ϼ���. : ");
	scanf_s("%c", &a);
	
	if (isalpha(a) != 0)
	{
		printf("�Է��Ͻ� ���� ���ĺ��Դϴ�.\n");
	}
	else
	{
		printf("�Է��Ͻ� ���� ���ĺ��� �ƴմϴ�.\n");
	}

	return 0;
}