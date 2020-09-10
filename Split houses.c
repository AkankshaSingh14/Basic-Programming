/*echo "# Basic-Programming" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M master
git remote add origin https://github.com/AkankshaSingh14/Basic-Programming.git
git push -u origin master*/

#include<stdio.h>
int main()
{
	int n,c=0,i,p=0;
	char ch[20],ar[20];
	scanf("%d",&n);
	scanf("%s",ch);
	for(i=0;i<n;i++)
	{
		if(ch[i]=='.')
		{
		ch[i]='B';
		c++;
		}
		if(ch[i]=='H'&&ch[i+1]=='H')
		p++;	
	}
	if(p==0)
	{
			printf("YES\n");
			printf("%s",ch);
	}
	else
	printf("NO");
	
}

