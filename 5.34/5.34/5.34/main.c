#include<stdio.h>
#include<stdlib.h>

long int power(int ba, int exp);

int main()
{
	int ba, exp;
	printf("�п�J����(���)�Ϋ���(���):");
	scanf("%d %d",&ba,&exp);
	printf("%d��%d���謰 %ld\n",ba,exp, power(ba,exp));
}

long int power(int ba, int exp)
{
	if (exp == 1)
		return ba;
	else
	{
		ba = ba * power(ba, exp-1);
	}
}