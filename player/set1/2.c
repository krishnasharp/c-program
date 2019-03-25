#include <stdio.h>
int main()
{
    long long int N,i=1,j;
    printf("Enter the number\n");
    scanf("%lld",&N);
    if(N<21)
    {
    for(j=N;j>=1;j--)
    i=i*j;
    printf("%lld",i);
   }
    else{
    printf("Out of range");
   }
}
