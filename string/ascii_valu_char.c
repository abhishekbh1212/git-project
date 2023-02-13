#include<stdio.h>
int my_vowel(char str1[]);
int main()
{
	char str1[100];
	int i;
	printf("Enter the character ");
	scanf("%s",str1);
	my_vowel(str1);
	printf("the ascii number is %c==> %d",str1[i],str1[i]);
}
int my_vowel(char str1[])
{
	int i;
	for (i=0;str1[i]!='\0';i++)
		return *str1;
}
