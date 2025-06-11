#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
     int a,b,c;
     scanf("%d",&a);
     c=a%10;
     if(c==0){printf("%d",a);}
     else if(c!=0){
          if(c==5){
               b= a + (10-c);
			printf("%d",b);
          }
          else if(c>5){
               b=a+(10-c);
               printf("%d",b);
          }
          else if(c<5){
               b=a-c;
               printf("%d",b);
          }
     }
          
     
}
