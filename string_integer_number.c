#include<stdio.h>
void main()
{
	int num,len=0;
//	printf("Enter the number ");
	int temp,i,j;
	char nstrtemp[10];
	char nstr[10];
	printf("Enter any number ");
	scanf("%d",&num);
	while(num>0)
	{
		temp=num%10;
		nstrtemp[len]=temp+48;
		num=num/10;
		len++;
	}
		nstrtemp[len]='\0';
		for (j=0,i=len-1;j<len;j++,i--)
		{
			nstr[j]=nstrtemp[i];
		}
		nstr[len]='\0';
		printf("Ented number is string format : %s",nstr);
	}


