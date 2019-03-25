#include<stdio.h>
#include<string.h>
void main()
{
int i,j,count=0,l,l1;
char a[100],b[100];
printf("Enter the strings");
scanf("%s%s",a,b);
l=strlen(a);
l1=strlen(b);
for(i=0;(a[i]!='\0'&&b[i]!='\0');i++)
{
	if(a[i]!=b[j])
  	{
		count++;
	  }
}
	if(count==1)
	{
	printf("YES");
	}
	else
	{
	    printf("NO");
	}
}
