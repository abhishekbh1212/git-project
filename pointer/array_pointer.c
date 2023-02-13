/*
//array of the //5 integer 
#include<stdio.h>
 int n=5;
int main()
{
	int var[5]={1,2,3,4,5,};
	int i;
	for (i=0;i<n;i++)
	{
		printf("value of the num is [%d]\n",i,var[i]);
	}
}
*/

/*
//array of pointer 
#include<stdio.h>
// int max=5;
int main()
{
	int max=5;
	int var[8]={1,2,3};
	int i,*ptr[max];

	for (i=0;i<max;i++)
	{
	ptr[i]=&var[i];
	}
	for (i=0;i<max;i++)
	{
	printf("value is [%d] = %d\n ",i,*ptr[i]);
	}
	}
	*/

#include<stdio.h>
int main()
{
        int  str= 4;
	char *names[]={"abhi","kiran","shail","namgu"};
	int i=0;
	for (i=0;i<str;i++)
	{
		printf("value of the names [%d]=%s\n ",i,names[i]);
	}
}
