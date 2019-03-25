#include <stdio.h>
int main()
{
char a[10],t;
int i,j;
    scanf("%s",a);
    for(i=0;i<=strlen(a);i++)
     {
    j=i+1;
    t=a[i];
    a[i]=a[j];
    a[j]=t;
    i++;
     }
printf("%s",a);
    return 0;
}
