#include<stdio.h>
int main(void)
{
   int a,b,i,t;
   while(scanf("%d",&t)!=EOF)
   {
      if(t>=1&&t<=20)
      {
          for(i=1;i<=t;i++)
          {
             while(scanf("%d%d",&a,&b)!=EOF)
             {
               printf("%d+%d=%d\n",a,b,a+b);
             }
          }
      }
   }
   return 0;
}
