#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
 long int n;
 int i,k;
 scanf("%ld%ld",&n,&k);
 for(i=0;i<k;i++)
 {
      if(n%10==0)
      n=n/10;
      else
      n=n-1;
 }
 printf("%ld",n);
  return 0;
}
