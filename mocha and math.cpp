#include<bits/stdc++.h>
using namespace std;
void solve(){
     int n;
     cin>>n;
     vector<int>a(n);
     for(int i=0;i<n;i++){
          cin>>a[i];
     }
     int ans = a[0];
     for(int i=0;i<n;i++){
          ans&=a[i];
     }
     cout<<ans<<endl;
     return ;
}
int main(){
     int t;
     cin>>t;
     while(t--){
          solve();
     }
     return 0;
}
