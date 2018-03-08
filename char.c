#include <stdio.h>
#include<string.h>
int main()
{
	int a,c,i;
	char s[50];
	scanf("%s%d",s,&c);
	a=strlen(s);
	for(i=0;i<c;i++)
	{
		printf("%c",s[i]);
	}
	return 0;
}
