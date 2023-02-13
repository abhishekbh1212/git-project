#include<stdio.h>
int my_comp(char str1[],char str2[]);
int main()
{
	int r=0;
	char str1[100], str2[100];
	printf("Enter the string 1");
	scanf("%s",str1);

	printf("Enter the string 2");
	scanf("%s",str2);

	r=my_comp(str1,str2);
	if (r==0)
	printf("same");
	else
		printf("differnt");
}

int my_comp(char str1[],char str2[])
{
	int i;
	for (i=0;str1[i];i++)
	{
		if (str1[i]!=str2[i])
			break;
	}
	if (str1[i]==str2[i])
		return 0;
	else
		return 1;
}


