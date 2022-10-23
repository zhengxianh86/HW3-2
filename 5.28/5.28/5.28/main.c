#include<stdio.h>
#include<stdlib.h>
char uppercase_letter(char);
char Lowercase_letter(char);


int main()
{
	char str;

	printf("請輸入一個大寫的英文字母：");
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
	printf("這個英文字母的小寫是 %c\n", c);
}

char Lowercase_letter(char c)
{
	c = c - 32;
	printf("這個英文字母的大寫是 %c\n", c);
}