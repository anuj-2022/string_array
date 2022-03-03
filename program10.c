#include<stdio.h>
#include<string.h>

void own_rev(char str1[]);//function decleration

void main()
{
//printf("")
char str[20]="THUNDERSOFT INDIA";
printf("str is %s\n",str);
own_rev(str);//function call
}

void own_rev(char str1[])//function definition
{
int i=0,n=0;
char ch;
printf("Enter the character\n");
scanf("%c",&ch);
for(i=0;str1[i]!='\0';i++)
{
	if(ch==str1[i])//check char with string
	n++;
}
	if(n>0)
	printf("given char %c is found %d times\n",ch,n);
	else 
	printf("given char %c is not found",ch);
}
