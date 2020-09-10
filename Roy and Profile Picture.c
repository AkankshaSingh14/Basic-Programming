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
	int l,n,w,h,i=0;
	scanf("%d",&l);
	scanf("%d",&n);
    while(i<n)
    {
		scanf("%d %d",&w,&h);
        if(w<l||h<l)
            printf("UPLOAD ANOTHER\n");
        else
        {
            if(w==h&&w>=l)
            printf("ACCEPTED\n");
            else
                printf("CROP IT\n");
        }
        i++;
    }
    return 0;
}
