#include<stdio.h>
int main()
{
	char str[100],n;
	int i,c=0;
	printf("enter the string ");
	scanf("%s",str);

	printf("Enter the char which want to search = \n");
	scanf(" %c",&n);

	for(i=0;str[i]!='\0';i++)
	{
		if (str[i]==n)
		c++;
	}
	printf("total = %d",c);
}
