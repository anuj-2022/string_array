#include<stdio.h>
#include<string.h>

void own_copy(char *,char *);

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

void own_copy(char *dest1,char *source1)
{
int i=0,n=0;
while(*source1!='\0')
{
	*dest1=*source1;
	dest1++;
	source1++;

}
*dest1='\0';
}
