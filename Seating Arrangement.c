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
	int s,t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&s);
		if(s<=108)
		{
			switch(s%12)
			{
				case 1:printf("%d WS\n",s+11);

                 break;

                 case 2:printf("%d MS\n",s+9);

                 break;

                 case 3:printf("%d AS\n",s+7);

                 break;

                 case 4:printf("%d AS\n",s+5);

                 break;

                 case 5:printf("%d MS\n",s+3);

                 break;

                 case 6:printf("%d WS\n",s+1);

                 break;

                 case 7:printf("%d WS\n",s-1);

                 break;

                 case 8:printf("%d MS\n",s-3);

                 break;

                 case 9:printf("%d AS\n",s-5);

                 break;

                 case 10:printf("%d AS\n",s-7);

                 break;

                 case 11:printf("%d MS\n",s-9);

                 break;

                 case 0:printf("%d WS\n",s-11);

                 break;

             }

         }

     }

    return 0;

}
