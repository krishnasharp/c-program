#include <stdio.h>

int main(void)
{
	char ch;
	scanf("%c",&ch);
	int no;
	no=ch;
	if((no>=65&&no<=96)||(no>=97&&no<=122))
	printf("alphabet");
	else
	printf("not an alphabet");
	return 0;
}|
