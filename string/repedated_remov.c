#include<stdio.h>
void char_chek(char s1[] ,char s2 );
int main()
{
	char s1[100],s2;
	int c;
	printf("enter the string ");
	scanf("%s",s1);
	printf("Enter the char ");
	scanf(" %c",&s2);

	char_chek(s1,s2);
	printf("s1=%s",s1);
}
void char_chek(char s1[], char s2)
{
	int count=0,i,j;
	for (i=0;s1[i];i++)
	{
		if (s1[i]==s2)
		{
			s1[i]=-92;
			for(j=0;s1[j];j++)
			{
				if(s1[j]==s1[j+1])
				{
					s1[j]=s1[j+1];
				}
			}
			i--;

		}
	}
}

