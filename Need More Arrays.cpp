#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin >> t;
     while(t--){
       
          int n;
          cin>>n;
          vector<int>a(n);
          for(int i=0;i<n;i++){
               cin>>a[i];
          }
          int ans=0;
          int temp=-69;
          for(int x:a){
               if(x>temp+1){
                    ans++;
                    temp=x;
               }
          }
          cout<<ans<<endl;
     }
}
