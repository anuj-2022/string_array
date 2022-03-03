#include<stdio.h>
#include<string.h>

void own_copy(char dest1[],char source1[]);

void main()
{
//printf("")
char source[20]="THUNDERSOFT INDIA";
char dest[20];
own_copy(dest,source);
printf("source is %s\n",source);
printf("dest is %s\n",dest);
//int i=strlen(str1);
//printf("%d",i);
}

void own_copy(char dest1[],char source1[])
{
int i=0,n=0;
for(i=0;source1[i]!='\0';i++)
	dest1[i]=source1[i];
//for(i;i<20;i++)
dest1[i]='\0';
//printf("own_len is %d\n",n);
//return n;
}
