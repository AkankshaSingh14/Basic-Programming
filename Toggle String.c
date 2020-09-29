#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100];
	int len=0,i;
	scanf("%s",ch);
	len=strlen(ch);
	for(i=0;i<len;i++)
	{
		if(isupper(ch[i]))
		{
			printf("%c",(tolower(ch[i])));
		}
		else
		printf("%c",(toupper(ch[i])));
	}
}
