#include<stdio.h>
int main()
{
	int n,i,j,count=0;
	printf("Enter the Number:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			for(j=2;j<i/2;j++)
			{
				if(i%j==0)
				{
					count++;
				}
			}
			if(count==0)
			{
				printf("%d",i);
			}
		}
	}
	return 0;
  }
