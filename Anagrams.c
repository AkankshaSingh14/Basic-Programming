/*echo "# Basic-Programming" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M master
git remote add origin https://github.com/AkankshaSingh14/Basic-Programming.git
git push -u origin master*/


#include<stdio.h>
#include<string.h>
int main()
{
    char a[10001],b[10001];
    int i,count,test,j,k,count1,count2,tmp;
    scanf("%d",&test);
    while(test--)
    {   
		scanf("%*c%s",a);
        scanf("%*c%s",b);
		count=0;
        for(i=0;i<strlen(a);i++)
        {
			tmp=a[i];
            count1=0,count2=0;
            for(j=0;j<strlen(b);j++)
            {
                if(b[j]==tmp&&tmp!=1&&b[j]!=1)
                {
                    for(k=0;k<strlen(a);k++)
                    {
                        if(a[k]==tmp)
                        {
                        	count1++;
                        	a[k]=1;
						}
                    }
                    for(k=0;k<strlen(b);k++)
                    {   
                        if(b[k]==tmp)
                        {
                        	count2++;
                        	b[k]=1;
						} 

                    }
		            count2>count1?count+=count2-count1:(count+=count1-count2);
                    break;
                }
                else if(j==strlen(b)-1&&tmp!=1)
                {
                    count++;
                    a[i]=1;
                }
            }
            if(i==strlen(a)-1)
            {
                for(k=0;k<strlen(b);k++)
                {
                    if(b[k]!=1)
                    {  count++;
                        b[k]=1;
                    }
                }
            }
        }
        printf("%d\n",count); 
    }
    return 0;
}
