#include <stdio.h>

int main(void)
{
	printf("int : %d \n", 1);
	printf("char  : %d \n", 'A');

	printf("print integer : %d \n", 127);
	printf("%d + %d = %d \n", 5, 7, 5 + 7);
	printf("int %d, float %f, char %c, string %s \n", 1, 1.f, '1', "1");

	//이름, 국어점수, 영어점수, 수학점수, 총점, 평균
	printf("이름	국어	영어	수학	총점	평균\n");
	printf("============================================\n");
	printf("%s	%d	%d	%d	%d	%.2f \n", "김길동", 80, 90, 80, 80 + 90 + 80, (80 + 90 + 80) / 3.f);

	printf("%10s%s\n", "hello", "world");
	printf("%-10s%s\n", "hello", "world");

	printf("lead zero test : %d\n", 3);
	printf("lead zero test : %3d\n", 3);
	printf("lead zero test : %03d\n", 3);

	printf("abcdefd12345\r 123 \n");

	printf("쌍따옴표 표현 : \" ");

	printf("현재 작업중인폴더 이름은 : C:\\Users\\TJ\\source\\repos\\Project1\\Project1 \n");


	printf("int의 크기 : %d \n", sizeof(int));

	printf("float의 크기 : %d \n", sizeof(float));

	printf("char의 크기 : %d \n", sizeof(char));

	/*printf("Hello, World!\n");
	printf("Hi, Tj\n");

	printf("%f, %f, %f, %f, %f", 1.0, -0.100, 2., .55165487789, -.100f);
	return 0;*/

}
