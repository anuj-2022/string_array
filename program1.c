#include<stdio.h>

void main()
{
int i;
char arr[5];
printf("base address of the array %p\n",arr);//name of the array contains the base address of the array

printf("Enter the data\n");
for(i=0;i<5;i++)
{
//printf("Enter the data %d\n",i+1);
//scanf("%c",&arr[i]);//initializing array using method 4
scanf("%c",arr+i);
}
printf("base address of the array %p\n",&arr[0]);//printing the address of each element without loop
printf("2nd address of the array %p\n",&arr[1]);
printf("3rd address of the array %p\n",&arr[2]);
printf("4th address of the array %p\n",&arr[3]);
printf("5th address of the array %p\n",&arr[4]);
printf("\nprinting the address using pointer method\n");
printf("base address of the array %p\n",arr);//printing the address of each element without loop
printf("2nd address of the array %p\n",arr+1);
printf("3rd address of the array %p\n",arr+2);
printf("4th address of the array %p\n",arr+3);
printf("5th address of the array %p\n",arr+4);

i=0;
while(arr[i]!='\0')//printing the array element value using while loop
printf("%c",arr[i++]);

printf("\n");
}
