#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int x;
	scanf("%d", &x);

	/*if (x > 0)
	{
		printf("positive1\n");
		printf("positive2\n");
		printf("positive3\n");
	}

	printf("always!");*/

	/*if (x % 3 == 0)
	{
		printf("%d = %d * %d \n", x, 3, x / 3);
	}
	if (x % 5 == 0)
	{
		printf("%d = %d * %d \n", x, 5, x / 5);
	}
	if (x % 7 == 0)
	{
		printf("%d = %d * %d \n", x, 7, x / 7);
	}*/

	/*if (x > 0)
	{
		printf("���\n");

		if (x % 2 == 0)
		{
			printf("¦��\n");
		}
		else
		{ 
			printf("Ȧ��\n");
		}
	}
	else
	{ 
		printf("���� Ȥ�� 0");
	}*/

	//������ ���� + 31���� ���� ���, �߸��� �Է��̶�� ���

	int range = 0;
	if (x >= 1 && x <= 31) {
		range = 1;
	}

	x %= 7;

	if (range /*x <= 31*/)
	{
		//x %= 7;

		if(x  == 0 || x  == 6)
		{
			printf("�ָ� ");

			if (x  == 6)
			{
				printf("�����");
			}
			if (x == 0)
			{
				printf("�Ͽ���");
			}
		}
		//if(!(x == 0 || x == 6))
		else
		{
			printf("����");
		}
	}
	//if (!range /*x < 0 || x > 31*/)
	else
	{
		printf("�߸��� �Է�: 1 �̻�, 31������ ���� �Է��ϼ���.");
	}

}