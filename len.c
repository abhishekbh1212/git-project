#include<stdio.h>
char str_len(char str1[]);
int main()
{
	char str1[100];
	int res=0;
	printf("Enter the string ");
	scanf("%s",str1);
	res=str_len(str1);
	printf("lem]ngth of the string is %d",res);
}
char str_len(char str1[])
{
	int i,count=0;
	for (i=0;str1[i]!='\0';i++);
return i;
}
