#include<stdio.h>
int char_chek(char s1[] ,char s2 );
int main()
{
	char s1[100],s2;
	int c;
	printf("enter the string ");
	scanf("%s",s1);
	printf("Enter the char ");
	scanf(" %c",&s2);

	c=char_chek(s1,s2);
	printf("%d",c);
}
int char_chek(char s1[], char s2)
{
	int count=0,i;
	for (i=0;s1[i];i++)
	{
		if (s1[i]==s2)
		count++;
	}
	return count;
}

