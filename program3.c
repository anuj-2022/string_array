#include<stdio.h>

void decending_fun(int arr1[],int c);

void main()
{
int i=0,n=0;
printf("Enter the size of array\n");
scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
//i=sizeof(arr)/sizeof(arr[0]);
	decending_fun(&arr,n);
	printf("The numbers arranged in descending order are given below\n");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\n");
}

void decending_fun(int arr1[],int b)
{
int i=0,j=0,c;
//for(i=0;i<b;i++)
//printf("%d ",arr1[i]);
for(i=0;i<b;i++)
{
	for(j=i+1;j<b;j++)
	{
		if(arr1[i]<arr1[j])
		{
			c=arr1[i];
			arr1[i]=arr1[j];
			arr1[j]=c;
		
		}
	}
}
}
