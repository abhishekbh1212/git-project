#include<stdio.h>
int my_swap(int  n);
int main()
{
	int n;
	printf("Enter the number ");
	scanf("%d",n);
	my_swap(n);
	printf("%d",n);
}
int my_swap(int n)
{
	int c,i,temp,j;
	for (i=0;i<n;i++)
	{
		c++;
		for (j=0;j<c--;j++)
		{
			temp=i;
			i=c;
			c=temp;
		}
		return c;

}

}	
