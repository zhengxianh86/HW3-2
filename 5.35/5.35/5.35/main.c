#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i=2;
	unsigned long long int f1=0, f2=1,cache;//�ܼƳ̤j��18,446,744,073,709,551,615

	while(i<=93)
	{
		cache = f1 + f2;
		f1 = f2;
		f2 = cache;

		printf("%3d||%20llu\n", i, cache);
		i++;
	}
	printf("\n���t�ί��X�̤j�O��Ƭ� %20llu\n",cache);
}