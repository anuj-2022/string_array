#include<stdio.h>
#include<string.h>

int own_fun(char str1[]);

void main()
{
//printf("")
char str[50]="THUNDERSOFT INDIA";
int i=0,j=0,r=0;
//printf("Enter the string\n");
//fgets(str,sizeof(str),stdin);
//i=strlen(str);
printf("printing character\n");
for(j=0;str[j]!='\0';j++)
printf("%c ",str[j]);

printf("\nthe string is %s\n",str);
for(j=0;str[j]!='\0';j++)
printf("address of %d element %p\n",j,&str[j]);

printf("length of strlen %d\n",strlen(str));
r=own_fun(str);
printf("user strlen is %d\n",r);
}

int own_fun(char str1[])
{
int i=0,n=0;
for(i=0;str1[i]!='\0';i++)
	n++;
printf("own_len is %d\n",n);
return n;
}
