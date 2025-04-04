#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	
	//1번 문제
	int number, number_A, number_B, number_C;
	int rem;

	printf("세 자리의 정수를 입력해주세요 ex:546 >");
	scanf("%d", &number);

	number_A = number / 100;
	rem = number % 100;

	number_B = rem / 10;
	number_C = rem % 10;

	printf("첫번재 숫자 %d, 두번째 숫자 %d, 세번째 숫자 %d", number_A, number_B, number_C);

	/*
	//2번 문제
	int input_sec;
	int output_h, output_m, output_s;
	int rem;

	printf("임의의 시간을 초로 입력해 주세요 >");
	scanf("%d", &input_sec);
	output_h = input_sec / 3600;
	rem = input_sec % 3600;
	output_m = rem / 60;
	output_s = rem % 60;

	printf("결과 :  %d시간 %d분 %d초", output_h, output_m, output_s); */
}