#include<stdio.h>
void main()
{
	long int num,i=0,temp=0;
	char str[20];
	printf("Enter the number ");
	scanf("%d",&num);
	while(str[i]!='\0')
	{
		if (str[i]>=48 && str[i]<=57)
		{
			temp=temp*10+(str[i]-48);
		}
		i++;
	}
		printf("number in integer format %ld",temp);
}


