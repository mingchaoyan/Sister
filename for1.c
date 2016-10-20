#include<stdio.h>
int main ()
{
  int n,i,j,temp;
  char str[2002];
  scanf("%d\n",&n);
  gets(str);
  for(i=1;i<=n;i++)
  {
    for (j=1;j<=2*n-1;j+=2)
    {
      if (str[j]<str[j+1])
      {
        temp=str[j];
        str[j]=str[j+1];
        str[j+1]=temp;
      }
    }
  }
  puts(str);
  return 0;
}
