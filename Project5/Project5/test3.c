#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	/*
	//���ڸ� �ϳ� �Է¹޾� �� ���� ������ ���� ���� Ȯ��
	//var, scanf

	char ch;

	printf("���ڸ� �ϳ� �Է��ϼ��� >");
	scanf("%c", &ch);

	printf("% d", ch >= 'A' && ch <='Z' || ch>='a' && ch <= 'z');
	return 0; */

	//printf("%c", 5 > 10 ? 'A' : 'B');

	/*int x = 10;

	x += 5;
	x += 5;

	x %= 7;

	x = x++ + ++x;

	printf("x = %d", x);*/

	int a, b, c;
	printf("���ڸ� ���� ������ �������� �Է� >");
	scanf("%d %d %d", &a, &b, &c);
	float avg = (float)(a + b + c) / 3.f;
	printf("%f", avg);


	return 0;
}