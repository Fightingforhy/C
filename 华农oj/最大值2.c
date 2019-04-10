#include<stdio.h>
int Max(int a,int b,int c);
int main()
{
   int a,b,c,max;
   scanf("%d %d %d",&a,&b,&c);
   max=Max(a,b,c);
   printf("%d",max);
   return 0;
}
int Max(int a,int b,int c)
{
   if(a>b&&a>c)
     return a;
   else if(b>a&&b>c)
     return b;
     else
     return c;
}
