#include <stdio.h>

int main(void) 
{
	char a[100];
	printf("enter the name:");
	scanf("%s",&a);
	char m;
	int i,count=0,max=0,j;
	for(i=0;a[i]!='\0';i++)
	{
		for(j=i+1;a[j]!='\0';j++)
		{
			if(a[i]==a[j])
			{
			count=count+1;
			}
	  	}
		if(count>max)
		 {
			m=a[i];
			max=count;
		}
	}
	printf("%c",m);
	return 0;
}
