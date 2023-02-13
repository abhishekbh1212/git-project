#include<stdio.h>
#include<string.h>
int main(){
	char str1[]="lucky";
	char str2[]="zbhi";
	int i=0,j=0;
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

