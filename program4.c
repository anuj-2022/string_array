#include<stdio.h>
int largest(int arr1[],int b);
void main()
{
int i=0,j=0,result;
printf("Enter the size of array\n");
scanf("%d",&j);
int arr[j];
printf("Enter the data\n");
for(i=0;i<j;i++)
scanf("%d",&arr[i]);
largest(&arr,j);
//printf("second largest element is %d\n",result);
}

int largest(int arr1[],int b)
{
int i=0,j=0,k=0,l1=0,l2=0;
l1=arr1[0];
for(i=1;i<b;i++)
{
	if(l1<arr1[i])
	{
	l1=arr1[i];
	j=i;
	}
}
l2=arr1[0];
for(i=0;i<b;i++)
{
	if(i==j)
	continue;
	if(l2<arr1[i])
	l2=arr1[i];

}
printf("largest %d\n",l2);
//return l2;
}	
