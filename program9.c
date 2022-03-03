#include<stdio.h>
#include<string.h>

void own_copy(char str1[]);//function decleration

void main()
{
//printf("")
char str[20]="THUNDERSOFT INDIA";
//own_rev(str);
printf("str is %s\n",str);
own_rev(str);//function call

printf("after reverse str is %s\n",str);
//int i=strlen(str1);
//printf("%d",i);
}

void own_rev(char str1[])//function definition
{
int i=0,n=0;
char ch;
n=strlen(str1);
for(i=0;i<n/2;i++)
{
	ch=str1[i];
	str1[i]=str1[n-i-1];
	str1[n-i-1]=ch;
}
}
