#include<stdio.h>
#include<string.h>
char my_comp(char str1[], char str2[]);
int main()
{
	char str1[100],str2[100];
	printf("enter the string ");
	scanf("%s",str1);

	printf("enter the anothere string ");
	scanf("%s",str2);

	my_comp(str1,str2);
}
char my_comp(char str1[],char str2[])
{
	int i,j;
	int n1=strlen(str1);
	int n2=strlen(str2);
	if(n1==n2){
		while(str1[i]!='\0'){
			if(str1[i]!=str2[j]){
				break;
			}
			i++;
			j++;
		}
	}
	if(str1[i]=='\0'&&str2[j]=='\0')
		printf("the strings are same");
	else
		printf("the strings are different");
}


