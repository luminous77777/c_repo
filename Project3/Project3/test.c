#include <stdio.h>
#pragma warning(disable: 4996)

int main(void)
{
	int mat, eng, kor, sum;
	float avg;
	
	printf("���� ������ �Է��ϼ���");
	scanf("%d", &kor);

	printf("���� ������ �Է��ϼ���");
	scanf("%d", &mat);

	printf("���� ������ �Է��ϼ���");
	scanf("%d", &eng);

	sum = kor + mat + eng;
	avg = (kor + mat + eng) / 3.0f;

	printf("�հ� : %d  ��� : %.2f", sum, avg);
}