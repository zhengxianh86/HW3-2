#include<stdio.h>
#include<stdlib.h>

long int multiple_of_2num(int, int);

int main()
{
	A:
	int num1, num2;
	long int lcm;
	printf("�п�J�⥿���:");
	scanf("%d %d",&num1, &num2);
	if ((num1 <= 0) || (num2 <= 0)) goto A;
	lcm = multiple_of_2num(num1, num2);

	printf("�̤p�����Ƭ� %ld\n",lcm);
}

long int multiple_of_2num(int a, int b)
{
	int i=1;
	while (1)
	{
		if ((i%a==0)&&(i%b==0))
		{
			return i;
		}
		i++;
	}
}