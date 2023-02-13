/*
#include<stdio.h>
char new_my(char str1[],char str2[]);
int main()
{
	char str1[100], str2[100];
	printf("Enter the string  1");
	scanf("%s",str1);

	printf("Enter the string  2");
	scanf("%s",str2);
	new_my(str1,str2);
	printf("str1 ===> %s \n str2===> %s \n ",str1,str2);
}
char new_my(char str1[],char str2[])
{
	int i,j;
	for (i=0;str1[i]!='\0';i++);
	for (j=0;str2[j]!='\0';j++,i++)

		str1[i]=str2[j];
		str1[i]='\0';
}
*/

/*
#include<stdio.h>
void change(char []);
void main()
{
	char str[20];
	printf("Enter the string ");
	scanf("%s",str);
	change(str);
	printf("%s",str);
}
void change(char str[])
{
	int a=strlen(str);
	int temp,i;
	for (i=0;i<a;i++)
	{
		temp=(int)str[i];
		if (temp>=65 && temp<=90)
		{
			str[i]=(char )temp+32;
		}
		else if (temp>=97 && temp<=123)
		{
			str[i]=(char)temp-32;
		}
	}
}
*/


//lower to upper 
#include<stdio.h>
#include<string.h>
void change(char []);
int main()
{
	char str[100];
	printf("Enter the string ");
	scanf("%s",str);
	change(str);
	printf("%s",str);
}
void change(char str[])
{
	int a=strlen(str);
	int temp,i;

	for (i=0;i<a;i++)
	{
		temp=(int) str[i];
		if (temp>=65 && temp<=90)
		{
			str[i]=(char)temp+32;
		}
		else if (temp>=97 && temp<=123)
		{
			str[i]=(char )temp-32;
		}
	}
}
