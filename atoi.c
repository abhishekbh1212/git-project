#include<stdio.h>
int my_atoi(const char s[]);
int main()
{
	int i,r,num;
	char s[100];
	printf("enter the string ");
	scanf("%s",s);
	r=my_atoi(s);
	printf("atoi is ==>%s int=%d\n ",s,r);
}
int my_atoi(const char s[])
{
	int res=0,i,num;
	if (s[i]=='+' || s[i]=='-')
		i= 1;

	else
		i=0;

	for(num=0;s[i];i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		num=num*10+s[i]-'0';
		else
			break;
	}
	if(s[0]=='-')
		num=-num;
printf("abhishek");
	return num;
}


