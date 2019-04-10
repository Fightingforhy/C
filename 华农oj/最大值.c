#include<stdio.h>
int main()
{
   int a,b,c,m;
   scanf("%d %d %d",&a,&b,&c);
   if(a>b)
     a=a;
    else
     m=a,a=b,b=m;
     if(a>c)
     a=a;
     else
     m=a,a=c,c=m;
     if(b>c)
     b=b;
     else
     m=b,b=c,c=m;
     printf("%d",a);
     return 0;
}
