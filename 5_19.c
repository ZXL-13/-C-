#include<stdio.h>
#include<math.h>
int main()
{
	int result_1=2+10/8*3;
	double result_2;

	int a=-1;
	int b=-2;
	int c=3;
	double x_1=(-b+sqrt(pow(b,2)-4*a*c))/2*a;
	double x_2=(-b-sqrt(pow(b,2)-4*a*c))/2*a;
	result_2=2+10/8.0*3;
	printf("���Ϊ��%d",result_1);

	printf("���Ϊ��%lf",result_2);

	printf("��һԪ���η��̵ĸ�Ϊ��%lf,%lf",x_1,x_2);
}

