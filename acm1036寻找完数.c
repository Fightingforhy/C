#include<stdio.h>
int main()
{
   int i,j,n,sum;
   scanf("%d",&n);
   for(i=1;i<n;i++)
   {
      sum=0;
      for(j=1;j<=i/2;j++)
      {
         if(i%j==0)
         {
            sum+=j;
         }
      }
      if(sum==i)
      {
          printf("%d its factors are ",i);
          for(j=1;j<=i/2;j++)
          {
              if(i%j==0)
              {
                  printf("%d ",j);
              }
          }
          printf("\n");
      }
   }
   return 0;
}
