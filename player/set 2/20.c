#include<stdio.h>
#include<stdlib.h>
void main()
{
char s[100000];
int i=0;
gets(s);
while(s[i]!='\0')
{
    if(s[i]=='x' || s[i]=='X' || s[i]=='y' ||s[i]=='Y' ||s[i]=='z' ||s[i]=='Z')
    {
        if(s[i]>=97 && s[i]<=122)
        {
        if(s[i]=='x')
                s[i]='a';
        else if(s[i]=='y')
            s[i]='b';
        else
            s[i]='c';
        }

        else{
            if(s[i]=='X')
                s[i]='A';
        else if(s[i]=='Y')
            s[i]='B';
        else
            s[i]='C';
        }
}
else{
    s[i]=s[i]+3;
}

i++;
}
puts(s);
}
