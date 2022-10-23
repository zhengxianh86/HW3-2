#include<stdio.h>
#include<stdlib.h>

long int power(int ba, int exp);

int main()
{
	int ba, exp;
	printf("叫块┏计(俱计)の计(俱计):");
	scanf("%d %d",&ba,&exp);
	printf("%d%dΩよ %ld\n",ba,exp, power(ba,exp));
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