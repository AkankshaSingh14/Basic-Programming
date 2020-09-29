#include <stdio.h>
int main() 
{
 int n,i;
 long long int p=1;
 scanf("%d",&n);
 int arr[n];
 for (i = 0; i < n; ++i)
  {
   scanf("%d",(arr + i));
   p= (p * arr[i]) % (long long int)(10E8 + 7);
 }
 printf("%lld\n",p);
 return 0;
}
