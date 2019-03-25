#include<stdio.h>
void main()
{
    int n,ch[10],i,j,c=0;
    printf("Enter a Number : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ch[i]);
    }
        for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(ch[i]==ch[j])
              {
                c++;
              }
            
            }
       if(c==1)
            {
             printf("\n%d",ch[i]);
            }
        }
    }
