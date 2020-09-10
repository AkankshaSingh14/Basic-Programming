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
	int i,n,s=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		s=s*i;
	printf("%d",s);
}
