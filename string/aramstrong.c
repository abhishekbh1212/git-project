#include<stdio.h>
int aramstrong(int n);
int main()
{
	int i,n,r;
	printf("Enter the number range ");
	scanf("%d",&n);
	for (n;n<500;n++)
	{

		r=aramstrong(n);

		if (r==1)
			printf("the aram strong number is ==> %d\n ",n);
	}
}
int aramstrong(int n)
{
	int sum=0,i,a,k;
	for (a=n;a>0;a=a/10)
	{
		k=a%10;
		sum=sum+(k*k*k);
	}
	if (sum==n)
		return 1;
	else
		return 0;
}
