#include<stdio.h>
void cmy_word(char str[]);
int main()
{
	char str[100];
	int i,c1=0,c2=0;
	printf("Enter the string ");
	scanf("%s",str);
	cmy_word(str);
	printf("the char== %d \n and words == %d",c1,c2+1);
}
void cmy_word(char str[])
{
	int i,c1=0,c2=0;

	for (i=0;str[i]!='\0';i++)
	{
		c1++;
		if (str[i]==' ')
			c2++;
	}
}
