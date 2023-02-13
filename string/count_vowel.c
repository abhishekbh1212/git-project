#include<stdio.h>
#include<string.h>
int my_vowel(char str[]);
int main()
{
	char str[100];
	int c1=0,c2=0,i;
	printf("Enter the string ");
	scanf("%s",str);
	my_vowel(str);
	printf("the vowel is %s",str);
}
int my_vowel(char str[])
{
	int i,c1=0,c2=0;
	for (i=0;str[i]!='\0';i++)
	{
		if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
			c1++;
		else
			c2++;
	}
	printf("\n vowels = %d\n",c1);
	printf("\n consont =%d\n",c2);
}
	

