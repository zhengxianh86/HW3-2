#include<stdio.h>
#include<stdlib.h>
char uppercase_letter(char);
char Lowercase_letter(char);


int main()
{
	char str;

	printf("�п�J�@�Ӥj�g���^��r���G");
	scanf("%c",&str);
	if ((65 <= str) &&(str <= 90))
	{
		uppercase_letter(str);
	}
	else if ((97 <= str) && (str <= 122))
	{
		Lowercase_letter(str);
	}
		
}


char uppercase_letter(char c)
{
	c = c + 32;
	printf("�o�ӭ^��r�����p�g�O %c\n", c);
}

char Lowercase_letter(char c)
{
	c = c - 32;
	printf("�o�ӭ^��r�����j�g�O %c\n", c);
}