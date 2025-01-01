//defination,declaration,sum,average,max and min value of an array
#include<stdio.h>
int main()
{
	int arr[10],i,sum=0,max,min;
	float avg;
	for(i=0;i<10;i++)
	{
	printf("enter value:");
	scanf("%d",&arr[i]);

	}
	for(i=0;i<10;i++)
	{
	printf( "value at index %d and value:%d",i,arr[i]);
	sum=sum+arr[i];
	printf(" sum of value: %d",sum);




}
