#include <stdio.h>
int main()
{
	int a[100],k,n,temp,i,j;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	printf("Enter the value of k: ");
	scanf("%d",&k);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<k;j++)
	{
	temp=a[n-1];
	for(i=n-2;i>=0;i--)
	{
		a[i+1]=a[i];
	}
	a[0]=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	return 0;
  }
