#include<stdio.h>
char rev_fun(char str1[]);
int main()
{
	char str1[100];
	printf("Enter the string ");
	scanf("%s",str1);
	rev_fun(str1);
	printf("Revrsed string is %s",str1);
}
char rev_fun(char str1[])
{
	int i,count=0,temp;
	for (i=0;str1[i];i++)
	{
		count++;
	}
	for (i=0;i<count--;i++)
	{
		temp=str1[i];
		str1[i]=str1[count];
		str1[count]=temp;
	}
}
