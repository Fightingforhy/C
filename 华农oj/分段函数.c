#include<stdio.h>
int Fin(int x);
int main()
{
   int x,y;
   scanf("%d",&x);
   y=Fin(x);
   printf("%d",y);
   return 0;
}
int Fin(int x)
{
   if(x<1)
   return x;
   else if(x>=1&&x<10)
   return 2*x-1;
   else
   return 3*x-11;
}
