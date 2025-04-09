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
		printf("양수\n");

		if (x % 2 == 0)
		{
			printf("짝수\n");
		}
		else
		{ 
			printf("홀수\n");
		}
	}
	else
	{ 
		printf("음수 혹은 0");
	}*/

	//교재의 조건 + 31일을 넘을 경우, 잘못된 입력이라고 출력

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
			printf("주말 ");

			if (x  == 6)
			{
				printf("토요일");
			}
			if (x == 0)
			{
				printf("일요일");
			}
		}
		//if(!(x == 0 || x == 6))
		else
		{
			printf("평일");
		}
	}
	//if (!range /*x < 0 || x > 31*/)
	else
	{
		printf("잘못된 입력: 1 이상, 31이하의 수를 입력하세요.");
	}

}