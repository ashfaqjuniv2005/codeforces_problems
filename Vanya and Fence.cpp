#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,h,c1=0,c2=0;
   cin>>n>>h;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]<=h){
        c1++;
    }
    else
        c2=c2+2;
   }
   int c=c1+c2;
   cout<<c;

   return 0;
}
