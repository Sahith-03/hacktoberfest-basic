#include<stdio.h>
int main()
{
   int n;
   n=1200/7;
   int x=2000/7;
   int a[n];
  while(x<=3200)
  {
     if((7*x % 5)!=0)
     {
         printf("%d,",x);
     }
     x++;
  }
}
