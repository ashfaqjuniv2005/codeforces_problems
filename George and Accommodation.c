#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
 int n,i,p,q,ans=0;
 scanf("%d",&n);
 for(i=0;i<n;i++){
    scanf("%d%d",&p,&q);
    if(q-p>=2){
        ans++;
    }
 }
 printf("%d",ans);
  return 0;
}
