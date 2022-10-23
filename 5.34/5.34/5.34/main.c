#include<stdio.h>
#include<stdlib.h>

long int power(int ba, int exp);

int main()
{
	int ba, exp;
	printf("請輸入底數(整數)及指數(整數):");
	scanf("%d %d",&ba,&exp);
	printf("%d的%d次方為 %ld\n",ba,exp, power(ba,exp));
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