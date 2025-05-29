#include<bits/stdc++.h>
using namespace std;
int main()
 
{
 int t; cin>>t;
 while(t--){
      int n,k;
      cin>>n>>k;
      int a[n];
      for(int i=0;i<n;i++){
           cin>>a[i];
      }
      int who_has_golds=0;
      int helped_persons=0;
      for(int i=0;i<n;i++){
           if(a[i]>=k){
                 who_has_golds+=a[i];
           }
           else if(a[i]==0){
                if(who_has_golds>0){
                     helped_persons++;
                     who_has_golds--;
                }
           }
      }
      cout<<helped_persons<<endl;
 }
 
}
