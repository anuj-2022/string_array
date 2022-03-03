#include<stdio.h>

void vowels(char arr1[]);

void main()
{
int i=0;
char arr[10];
printf("Enter the data\n");
for(i=0;i<10;i++)
scanf("%c",&arr[i]);
printf("base address of array %p\n",arr);
vowels(arr);

}

void vowels(char arr1[])
{
int i=0,j=0;
for(i=0;i<10;i++) 
{
if((arr1[i]=='a')||(arr1[i]=='e')||(arr1[i]=='i')||(arr1[i]=='o')||(arr1[i]=='u')||(arr1[i]=='A')||(arr1[i]=='E')||(arr1[i]=='I')||(arr1[i]=='O')||(arr1[i]=='U'))//compair voweels with string
printf("element=%c position=%d address=%p\n",arr1[i],i,&arr1[i]);
}
}
