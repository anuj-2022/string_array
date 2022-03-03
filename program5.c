#include<stdio.h>
void reverse(int arr1[],int b);
void main()
{
int i=0,j=0;
printf("Enter the size of array\n");
scanf("%d",&j);
int arr[j];
printf("Enter the data\n");
for(i=0;i<j;i++)
scanf("%d",&arr[i]);
reverse(arr,j);
}

void reverse(int arr1[],int b)
{
	int i=0;
	printf("before reverse array is\n");
	for(i=0;i<b;i++)
	printf("%d ",arr1[i]);
	
	printf("\nafter reverse array is\n");
	for(i=b-1;i>=0;i--)
	printf("%d ",arr1[i]);

	printf("\n");

}	
