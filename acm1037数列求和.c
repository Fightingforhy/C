#include<stdio.h>
int main()
{
   int a,b,c,n,i;
   float sum=0;
   scanf("%d",&n);
   a=1;
   b=2;
   for(i=1;i<=n;i++)
   {
      sum+=(float)b/a;
      c=a;
      a=b;
      b=c+b;
   }
   printf("%.2f",sum);
}
