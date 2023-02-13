#include<stdio.h>
int main()
{
	char s[100],c1,c2;
	int i;
	printf("Enter the  : ");
	scanf("%s",s);

	printf("Enter a char replace");
	c1=scanf("%s",s);
	scanf("%s",s);


	printf("Enter char to replace with %c:",c1);
	c2=scanf("%s",s);
	printf("befor repalce %s",s);
	
	for (i=0;s[i];i++)
	{
		if (s[i]==c1)
		{
			s[i]=c2;
		}
	}
printf("\n after replace %s",s);
