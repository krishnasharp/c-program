#include<stdio.h>
#include<string.h>
void main()
{
char s[20],b[20];
int i;
printf("enter the string");
scanf("%d",&s);
for(i=0;s[i]!='\0';i++)
{
if((s[i]!='a')||(s[i]!='e')||(s[i]!='i')||if(s[i]!='o')||(s[i]!='u'))
{
b[i]=s[i];
}}
printf("%s",b);
str=strlen(b);
for(i=str;b[i]!='\0';i--)
{
printf("%c",b[i]);

}
