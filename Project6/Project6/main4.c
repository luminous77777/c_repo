#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	//1. 숫자의 부호를 판단(양수, 음수, 0 판단)
	
	/*int X;

	X = -5;

	printf("%s", X == 0 ? "0이다" : X>0 ? "양수다" : "음수다");*/


	//2. 정수의 값을 기준으로 3의 배수이면서 5의 배수인지 판단
	
	/*int X = 0;

	printf("%s", (0== X%3 && 0 == X%5) ? "3의 배수이자 5의 배수" : "3의 배수이자 5의 배수가 아니다");*/

	//3. 정수 세개를 기준으로 최대값 출력
	
	int X = 1, Y = 2, Z = 3;
	int a;
	
	//3-1번 방법
	printf("값X : %d 값Y: %d 값Z: %d \n", X, Y, Z);
	printf("%d가 가장 크다\n", X > Y && X > Z ? X : (Y>Z ? Y:Z));

	//
	//3-2번 방법
	a = X > Y ? X : Y;

	printf("가장 큰 정수는 %d", a > Z ? a : Z);
	
	//4. 두개의 정수의 차이를 항상 양수로 표현

	/*int X, Y;

	X = 5, Y = 10; 
	printf("%d",  X>Y ? X-Y : Y-X);*/

	// + 결과 값의 부호만 바꾸는 방법도 있다


	//5. 두 변수의 값을 교환

	/*int X, Y, Z;
	X = 5, Y = 11;
	printf("원래 X %d, Y %d \n", X, Y);

	Z = X;
	X = Y;
	Y = Z;
	printf("변환 X %d, Y %d", X, Y);*/
	//비트연산을 활용하면 추가 변수 없이도 가능.

















	/*srand(time(NULL));
	int dice = rand() % 6 +1;

	printf("%d", dice);*/
}