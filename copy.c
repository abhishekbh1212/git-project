#include<stdio.h>
void  copy_name(char *str1,char *str2);
int main()
{
	char str1[100],str2[100];
	printf("Enter the string 1 ");
	scanf("%s",str1);
	copy_name(str1,str2);
	printf("string 1 is copyedd in 2 =%s",str2);
}
void copy_name(char str1[],char str2[])
{
	int i;
	for (i=0;str1[i]!='\0';i++)
		str2[i]=str1[i];
	str2[i]='\0';
}
