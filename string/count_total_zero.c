#include<stdio.h>
int zero(int n);
int main()
{
	int n;
	printf("enter the string ");
	scanf("%d",n);
	r=zero(n);
	printf("the 1s and 0s are %d %d",n,r);
}
int zero(int n)
{
	for (i=0;n%10;i++)
	{
		

