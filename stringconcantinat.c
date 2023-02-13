#include<stdio.h>
void str_cont(char str1[],const char str2[]);
void main()
{
	char res;
	char str1[100],str2[100];
	printf("Enter the string 1 ");
	scanf("%s",str1);

	printf("Enter the string 2 ");
	scanf("%s",str2);
	str_cont(str1,str2);
	printf("str1===>%s\n str2===>%s",str1,str2);
}
void str_cont(char str1[], const char str2[])
{
	int i,j,temp=0;
	for (i=0;str1[i]!='\0';i++);

	for (j=0;str2[j]!='\0';j++,i++)

		str1[i]=str2[j];
		str1[i]='\0';
}
	
