#include <stdio.h>

int main(void)
{
	printf("int : %d \n", 1);
	printf("char  : %d \n", 'A');

	printf("print integer : %d \n", 127);
	printf("%d + %d = %d \n", 5, 7, 5 + 7);
	printf("int %d, float %f, char %c, string %s \n", 1, 1.f, '1', "1");

	//�̸�, ��������, ��������, ��������, ����, ���
	printf("�̸�	����	����	����	����	���\n");
	printf("============================================\n");
	printf("%s	%d	%d	%d	%d	%.2f \n", "��浿", 80, 90, 80, 80 + 90 + 80, (80 + 90 + 80) / 3.f);

	printf("%10s%s\n", "hello", "world");
	printf("%-10s%s\n", "hello", "world");

	printf("lead zero test : %d\n", 3);
	printf("lead zero test : %3d\n", 3);
	printf("lead zero test : %03d\n", 3);

	printf("abcdefd12345\r 123 \n");

	printf("�ֵ���ǥ ǥ�� : \" ");

	printf("���� �۾��������� �̸��� : C:\\Users\\TJ\\source\\repos\\Project1\\Project1 \n");


	printf("int�� ũ�� : %d \n", sizeof(int));

	printf("float�� ũ�� : %d \n", sizeof(float));

	printf("char�� ũ�� : %d \n", sizeof(char));

	/*printf("Hello, World!\n");
	printf("Hi, Tj\n");

	printf("%f, %f, %f, %f, %f", 1.0, -0.100, 2., .55165487789, -.100f);
	return 0;*/

}
