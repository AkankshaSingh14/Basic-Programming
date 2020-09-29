#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100];
	int len=0,c=0,i,j;
	scanf("%s",ch);
	len=strlen(ch);
	for(i=0,j=len-1;i<len/2;i++,j--)
	{
		//printf("%c %c",ch[i],ch[j]);
		if(ch[i]!=ch[j])
		c++;
	}
	if(c!=0)
		printf("NO");
	else
		printf("YES");
}
