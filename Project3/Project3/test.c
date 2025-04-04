#include <stdio.h>
#pragma warning(disable: 4996)

int main(void)
{
	int mat, eng, kor, sum;
	float avg;
	
	printf("국어 점수를 입력하세요");
	scanf("%d", &kor);

	printf("수학 점수를 입력하세요");
	scanf("%d", &mat);

	printf("영어 점수를 입력하세요");
	scanf("%d", &eng);

	sum = kor + mat + eng;
	avg = (kor + mat + eng) / 3.0f;

	printf("합계 : %d  평균 : %.2f", sum, avg);
}