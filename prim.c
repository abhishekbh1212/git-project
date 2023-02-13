#include<stdio.h>
int main()
{
	int i,rev,n,j;
	printf("Enter the number ");
	scanf("%d",&n);
	i=n;
	while (n>0)
	{
		n=n%10;
		rev=rev*10+j;
		n=n/10;
	if (n==rev)
		printf("prime number ");
		else
			printf("not a prime");
	}}
