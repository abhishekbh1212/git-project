#include<stdio.h>
#include<string.h>
void interchange(char []);
void main()
{
	char str[50];
	printf("enter the string ");
	scanf("%s",str);
	printf("Before interchange : %s\n",str);
	interchange(str);
	printf("After  interchange : %s\n",str);
}
void interchange(char str[])

{
	int new=strlen(str);
	int temp,i;
	for (i=0;i<new;i++)
	{
		temp=(int)str[i];
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

