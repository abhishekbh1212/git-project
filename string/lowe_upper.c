#include<stdio.h>
#include<string.h>
int my_lower(char str[]);
int main()
{
	int i;
	char str[100];
	printf("enter the string");
	scanf("%s",str);
	my_lower(str);
	printf("the string is lower to upper is %s",str);
}
int my_lower(char str[])
{
	int i;
	for (i=0;str[i]!='\0';i++)
	{
		if (str[i]>=65 && str[i]<=90)
			str[i]=str[i]+32;
		else
			str[i]=str[i]-32;
	}
}
