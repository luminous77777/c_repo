#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	
	//1�� ����
	int number, number_A, number_B, number_C;
	int rem;

	printf("�� �ڸ��� ������ �Է����ּ��� ex:546 >");
	scanf("%d", &number);

	number_A = number / 100;
	rem = number % 100;

	number_B = rem / 10;
	number_C = rem % 10;

	printf("ù���� ���� %d, �ι�° ���� %d, ����° ���� %d", number_A, number_B, number_C);

	/*
	//2�� ����
	int input_sec;
	int output_h, output_m, output_s;
	int rem;

	printf("������ �ð��� �ʷ� �Է��� �ּ��� >");
	scanf("%d", &input_sec);
	output_h = input_sec / 3600;
	rem = input_sec % 3600;
	output_m = rem / 60;
	output_s = rem % 60;

	printf("��� :  %d�ð� %d�� %d��", output_h, output_m, output_s); */
}