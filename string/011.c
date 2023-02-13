/*
#include<stdio.h>
#include<string.h>
int main()
{
	char ab[]="abhi";
	 printf("%zu",strlen(ab));
}
*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char food[]="pizz";
	char bestfood[strlen(food)];
	strcpy(bestfood,food);
	printf("%d\n",strlen(food));
	printf("%s",bestfood);

}
*/

/*
#include<stdio.h>
#include<string.h>
int main()
{
	char t1[]="hi";
	char t2[]="hello";
	strcat(t1,t2);
	printf("%s",t1);

}
*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="abhi";
	char str2[]="shek";

	int res=strcmp(str1,str2);
	printf("%d",res);
}
*/


#include<stdio.h>
char my_str_freq(char str[]);
int main()
{
	char str[100],ch;
	int r;
	printf("Enter the string ");
	scanf("%s",str);
	printf("Enter a char to find its frequence");
	scanf("%c",&ch);

	r=my_str_freq(str);
	printf("%d",r);
}
char my_str_freq(char str[])
{
	int i,count=0,ch;
	for (i=0;str[i]!='\0';i++)
	{
		if (ch==str[i])
			count++;
	}
	return count;
}


