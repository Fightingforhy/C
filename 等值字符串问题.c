#include<stdio.h>
#include<string.h>
#define M 100
int Search(char *Source);
int main()
{
  char s[M];
  int i,a,n;
  while(gets(s))
  {
    n=strlen(s);
    a=Search(s);
    if(a>=0)
    {
      for(i=a;s[i]==s[a]&&i<n;i++)
      {
        printf("%c",s[i]);
      }
      printf("\n");
    }
    else
      printf("no\n");
  }
  return 0;
}

int Search(char *Source)
{
  int i,max=-1,a=-1,tempcount=1,count=0;
  int n;
  char s[M];
  strcpy(s, Source);
  n=strlen(s);
  for(i=0;i<n;i++)
  {
    if(s[i]==s[i+1])
    {
      a=i;
      tempcount++;
    }
    else
    {
      if(tempcount>count)
      {
        count=tempcount;
        a=i-count+1;
        max=a;
      }
      if(tempcount==count)
      {
          if(s[tempcount]>s[count])
            a=i-count+1;
          else
            a=i-tempcount+1;
          max=a;
      }
      tempcount=1;
    }
  }
  if(s[max]!=s[max+1])
    max=-1;
  return max;
}
