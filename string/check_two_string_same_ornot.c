#include<stdio.h>
int main()
{
	int i,f;
	char s1[100],s2[100];
	printf("Enter the string ");
	scanf("%s",s1);
	printf("Enter the string ");
	scanf("%s",s2);

	for (i=0;s1[i]!='\0'||s2[i]!='\0';i++)
	{
		if(s1[i]!=s2[i])
		{
			f=1;
			break;
		}
	}
	if (f==0)
		printf("string are same \n");
	else
		printf("string are not same\n");
}

