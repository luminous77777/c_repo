#include <stdio.h>

int main(void)
{
	//int score = 85;
	//char grade;
	//// 조건
	////90이상 A, 80이상 B, 나머지는 F

	//if (score >= 90) {
	//	grade = 'A';
	//}
	//else if (score >= 80) {
	//	grade = 'B';
	//}
	//else {
	//	grade = 'F';
	//}
	//printf("점수는 %c", grade);

	/*int a = 10, b = 30, c = 20;

	int max = a;

	if (max < b) {
		max = b;
	}
	if (max < c) {
		max = c;
	}
	printf("큰수는 %d", max);*/

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
	//	//printf("현재의 sum : %d, 현재의 i : %d \n", sum,i);
	//	i++;
	//}
	//printf("1부터 %d까지의 합계는 %d\n", n, sum);


	//현재의 반복문을 기반으로 1부터 100까지의 짝수의 합을 구하시오

	/*int i = 1, n, sum = 0;

	n = 100;
	while (i <= n)
	{
		sum += i;
		i++;
	}
	printf("sum : %d \n", sum);*/
	

	//영대문자를 가로 출력 하시오
	
	int i = 'A';
	printf("영 대문자 출력 : ");

	while (i<='Z') {
		printf("%c ", i++);
	}
}