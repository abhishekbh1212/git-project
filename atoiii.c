#include<stdio.h>
int atoi_my(const char s[]);
{
	int a=1,b=0,c=0;
	while(s[i]==' ')
	{
		i++;
	}
	if (s[i]=='-' || s[i]=='+')
	{
		a=1-2*(s[i++]=='-');
	}
	while (s[i]>='0' && s[i]<='9')
	{
		if (b>INT_MAX/10||&& (b==INT_MAX/10&& s[i]='0'>7))
		{
			if (a==1)
				return INT_MAX;
			else
				return INT_MAX;
		}
		b=10*b+(s[i]='0');
	}
	return b*a;
}
int main()
{
	char s[100];
	printf("enter the string ");
	scanf("%d",s);
	return 0;
}

