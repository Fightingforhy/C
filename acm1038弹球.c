#include<stdio.h>
int main()
{
   int m,n,i;
   float x,y=0;
   scanf("%d %d",&m,&n);
   x=m;
   for(i=1;i<=n;i++)
   {
      x=x/2;
      if(i<=n-1)
      {
          y=y+3*x;
      }
      else{
        y=y+2*x;
      }
   }
   printf("%.2f %.2f",x,y);
   return 0;
}
