#include <stdio.h>

int main(void)
{
	//int score = 85;
	//char grade;
	//// ����
	////90�̻� A, 80�̻� B, �������� F

	//if (score >= 90) {
	//	grade = 'A';
	//}
	//else if (score >= 80) {
	//	grade = 'B';
	//}
	//else {
	//	grade = 'F';
	//}
	//printf("������ %c", grade);

	/*int a = 10, b = 30, c = 20;

	int max = a;

	if (max < b) {
		max = b;
	}
	if (max < c) {
		max = c;
	}
	printf("ū���� %d", max);*/

	/*int i = 1;
	while (i <= 10)
	{
		printf("%d\n",i);
		i++;
	}*/

	//int i = 1, n, sum = 0;

	//n = 15;

	//while (i <= n) {
	//	sum += i;
	//	//printf("������ sum : %d, ������ i : %d \n", sum,i);
	//	i++;
	//}
	//printf("1���� %d������ �հ�� %d\n", n, sum);


	//������ �ݺ����� ������� 1���� 100������ ¦���� ���� ���Ͻÿ�

	/*int i = 1, n, sum = 0;

	n = 100;
	while (i <= n)
	{
		sum += i;
		i++;
	}
	printf("sum : %d \n", sum);*/
	

	//���빮�ڸ� ���� ��� �Ͻÿ�
	
	int i = 'A';
	printf("�� �빮�� ��� : ");

	while (i<='Z') {
		printf("%c ", i++);
	}
}